#include <iostream>
#include <fstream>

using namespace std;

// ROOT library objects
#include <TF1.h> // 1d function class
#include <TH1.h> // 1d histogram classes
#include <TStyle.h>  // style object
#include <TMath.h>   // math functions
#include <TCanvas.h> // canvas object

void analyze_v2_2particle(){
	
	Int_t nEvents = 0; // event counter
	string helpString; // help variable
	Double_t eventavg2A = 0;
	Double_t eventavg2QA = 0;
	
	// open input file
	ifstream file("phi_dist.dat");
	Int_t eventNo = -1;
	
	// create histogram that we will fill with phi-values
	TH1D* hPhi = new TH1D("hPhi", "; phi; Counts", 
			  100, 0, 2*TMath::Pi());

	while(file >> helpString >> eventNo) {
		cout << "\nReading event : " << eventNo << endl;
		nEvents++;
		
		Int_t nTracks = -1;
		file >> helpString >> nTracks;
		cout << "Event contains " << nTracks << " tracks" << endl;
		
		Double_t phi[nTracks];
		Int_t trackNo;

		for(Int_t nt = 0; nt < nTracks; nt++) {

			// Read back the phi values
			file >> trackNo >> helpString >> phi[nt];
			hPhi->Fill(phi[nt]);
		}
		// Here we want to analyze the phi values in the next exercise
		
		//Q vector
		Double_t sum_cos2 = 0;
		Double_t sum_sin2 = 0;
		
		//2-particle
		Double_t sum_cos2_diff = 0;
		for (Int_t i = 0; i < nTracks; i++) {
			
			//Compute Q vector
			sum_cos2 += TMath::Cos(2*phi[i]);
			sum_sin2 += TMath::Sin(2*phi[i]);
			
			//Compute 2-particle
			for (Int_t j = i+1; j < nTracks; j++) {
				
				sum_cos2_diff += 2*TMath::Cos(2*(phi[i]-phi[j]));
			}
		}
		
		// calculate <2> for this event
		Double_t eventavg2 = (1./(nTracks*(nTracks-1)))*sum_cos2_diff;
		Double_t eventavg2Q = (pow(sum_cos2,2)+pow(sum_sin2,2)-nTracks)/(nTracks*(nTracks-1));
		cout << "<2> = " << eventavg2 << endl;
		cout << "Q: <2> = " << eventavg2Q << endl;
		if (eventavg2 < 0) {
			cout << "<2> (for this event) negative, no real v2." << endl;
		}
		else {
			cout << "v2 (for this event) = " << sqrt(eventavg2) << endl;
		}
		
		if (eventavg2Q < 0){
			cout << "Q: <2> (for this event) negative, no real v2." << endl;
		}
		
		else {
			cout << "Q: v2 (for this event) = " << sqrt(eventavg2Q) << endl;
		}
		
		if (eventavg2 > 0) {
			eventavg2A += sqrt(eventavg2);
		}
		if (eventavg2Q > 0) {
			eventavg2QA += sqrt(eventavg2Q);
		}
		
	}

	cout << "\nv2 (average of all events) = " << eventavg2A/nEvents << endl;
	cout << "Q: v2 (average of all events) = " << eventavg2QA/nEvents << endl;
	
	file.close();
	
	TCanvas* c1 = new TCanvas("c1", "v2 canvas", 900, 600);
	hPhi->SetMinimum(0);
	hPhi->Draw();
}
