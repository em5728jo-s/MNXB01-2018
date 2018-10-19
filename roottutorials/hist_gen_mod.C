#include <TH1.h>
#include <TF1.h>
#include <TStyle.h>

void hist_gen_mod(int nRandom, double sigma)
{ 
  TH1D* hist = new TH1D("hist", "Histogram", 40, -3, 3);
  
  TF1* fGaus = new TF1("fGaus", "gaus", -3, 3);
  fGaus->SetParameters(1, 0, sigma); // amplitude, mean, sigma
	
  for(int i = 0; i < nRandom; i++) {

    hist->Fill(fGaus->GetRandom());
  }
  
  hist->SetMinimum(0);
  
  hist->Sumw2();
  
  hist->Fit("pol2");
  
  gStyle->SetOptFit();

  hist->Draw();
}

// At about nRandom = 500000 the ratio chi²/ndf reaches about 2.
// If nRandom is greater the fit will become bad for sigma = 3.0.
