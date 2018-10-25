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

	while(file >> helpString >> eventNo) {
		cout << "Reading event : " << eventNo << endl;
		nEvents++;
		
		Int_t nTracks = -1;
		file >> helpString >> nTracks;
		cout << "Event contains " << nTracks << " tracks" << endl;
		
		Double_t phi[nTracks];
		Int_t trackNo;

		for(Int_t nt = 0; nt < nTracks; nt++) {

			// Read back the phi values
			cout << trackNo << " : " << phi[nt] << endl;
		}
		// Here we want to analyze the phi values in the next exercise
	}
	
}
