#include <iostream>
using namespace std;
main() {
	float MON, TUE, WED, THUR, FRI, SAT, SUN;
	cout << "Enter Monday" << endl;
	cin >> MON;
	cout << "Enter Tuesday" << endl;
	cin >> TUE;
	cout << "Enter Wednesday" << endl;
	cin >> WED;
	cout << "Enter Thursday" << endl;
	cin >> THUR;
	cout << "Enter Friday" << endl;
	cin >> FRI;
	cout << "Enter Saturday" << endl;
	cin >> SAT;
	cout << "Enter Sunday" << endl;
	cin >> SUN;
	cout << "Average:" << (MON + TUE + WED + THUR + FRI + SAT + SUN)/7;
}

//other way to do it is by using while- or for-loop
