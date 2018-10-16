#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
// read the data file
	ifstream inFile("detReadout.dat");
	if(!inFile) {
		cout << "Can’t open dataSetFile detReadout.dat" << endl;
		return 1;
	}
	
	double time = 0.;
	int count = 0;
	bool isOk = false;

	vector<double> times; //Vectors to store the times and counts
	vector<int> counts;

	while(inFile >> time) { //Read each line and store it if it’s OK
		inFile >> count;
		inFile >> isOk;
	if(isOk) {
		times.push_back(time);
		counts.push_back(count);
	}
}
	inFile.close();
	
	// TODO calculate mean and standard deviation
	
	double t = 0;
	double s = 0;
	double mean = 0;
	double standardDeviation = 0;
	
	for (int i = 0; i < counts.size(); i++){
		t = t + counts[i];
		mean = t/times.size();
		s = s + pow(counts[i], 2);
		standardDeviation = sqrt(s/counts.size() - pow(mean, 2));
	}

	cout << "Mean: " << mean << endl;
	cout << "Standard deviation: " << standardDeviation << endl;
	
	// TODO loop over counts and calculate deviation from mean. If deviation is
	//bigger than 5*standardDeviation - print it.
	
	double devFromMean = 0;
	
	for (int k = 0; k < counts.size(); k++){
		if ((counts[k] - mean) > 5*standardDeviation){
			cout << "Alien activity count: " << counts[k] << endl;
			cout << "at time: " << times[k] << endl;
		}
	}
	
	return 0;
}
