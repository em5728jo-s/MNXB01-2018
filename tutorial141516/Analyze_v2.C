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
	
	// open input file
	ifstream file("phi_dist.dat");
	Int_t eventNo = -1;
	Int_t nTracks = -1;
	Double_t sum_cos2_diff = 0;

	while(file >> helpString >> eventNo) {
		cout << "Reading event : " << eventNo << endl;
		nEvents++;
		
		file >> helpString >> nTracks;
		cout << "Event contains " << nTracks << " tracks" << endl;
		
		Double_t phi[nTracks];
		Int_t trackNo;

		for(Int_t nt = 0; nt < nTracks; nt++) {

			// Read back the phi values
			file >> trackNo >> helpString >> phi[nt];
		}
		// Here we want to analyze the phi values in the next exercise
		
		for(Int_t i = 0; i < nTracks; i++) {
			for(Int_t j = i+1; j < nTracks; j++) {
				
				sum_cos2_diff += 2*TMath::Cos(2*(phi[i]-phi[j]));
			}
		}
	}
	
	file.close();
		
		// calculate <2> for this event
		Double_t eventavg2 = (1./(nTracks*(nTracks-1)))*sum_cos2_diff;
		cout << "<2> = " << eventavg2 << endl;
		cout << "sum_cos2_diff = " << sum_cos2_diff << endl;
		
		// Update <2> event average for Q-vector and 2-particle
		//....

}
