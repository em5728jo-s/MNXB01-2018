#include <TH1.h>
#include <TF1.h>

void hist_gen_mod(int nRandom, double sigma)
{
  TH1D* hist = new TH1D("hist", "Histogram", 40, -3, 3);
  
  TF1* fGaus = new TF1("fGaus", "gaus", -3, 3);
  fGaus->SetParameters(1, 0, sigma); // amplitude, mean, sigma
  
  TH1::Sumw2();
	
  for(Int_t i = 0; i < nRandom; i++) {

    hist->Fill(fGaus->GetRandom());
  }

  hist->Draw();
}
