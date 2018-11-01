#include <iostream>
#include <fstream>

using namespace std;

// ROOT library objects
#include <TF1.h> // 1d function class
#include <TH1.h> // 1d histogram classes
#include <TStyle.h>  // style object
#include <TMath.h>   // math functions
#include <TCanvas.h> // canvas object
#include <TRandom.h>
#include <TTree.h>
#include <TClonesArray.h>
#include <TFile.h>
#include "MyClasses.C"

void analyze_v2_2particle_tree(){
	
	Double_t eventavg2QA = 0;
	
	// Open the file and get the tree
	TFile* file = TFile::Open("phi_dist.root");
	TTree* tree = (TTree*)file->Get("tree");
	MyEvent* event = 0;
	TClonesArray* trackArray = 0;
	tree->SetBranchAddress("event", &event);
	tree->SetBranchAddress("track", &trackArray);
	
	Int_t nEvents = tree->GetEntries();
	for(Int_t n = 0; n < nEvents; n++) {
		
		cout << "\nReading event : " << n << endl;
		
		// Read in event n (fills event and trackArray)
		tree->GetEntry(n);
					
		//Q vector
		Double_t sum_cos2 = 0;
		Double_t sum_sin2 = 0;
	
		const Int_t nTracks = trackArray->GetEntries();
		cout << "Event contains " << nTracks << " tracks" << endl;
		for(Int_t i = 0; i < nTracks; i++) {
		
			MyTrack* track = (MyTrack*)trackArray->At(i);
			
			//Compute Q vector
			sum_cos2 += TMath::Cos(2*track->fPhi);
			sum_sin2 += TMath::Sin(2*track->fPhi);

		}
			
		// do analysis
		
		// calculate <2> for this event
		Double_t eventavg2Q = (pow(sum_cos2,2)+pow(sum_sin2,2)-nTracks)/(nTracks*(nTracks-1));
		cout << "Q: <2> = " << eventavg2Q << endl;

		if (eventavg2Q < 0){
			cout << "Q: <2> (for this event) negative, no real v2." << endl;
		}

		else {
			cout << "Q: v2 (for this event) = " << sqrt(eventavg2Q) << endl;
		}

		if (eventavg2Q > 0) {
			eventavg2QA += sqrt(eventavg2Q);
		}
	}

	cout << "\nQ: v2 (average of all events) = " << eventavg2QA/nEvents << endl;
	
	file->Close();

}
