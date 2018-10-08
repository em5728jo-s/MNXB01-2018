#include <iostream>
using namespace std;

int main() {
	int year;
	cout << "Enter a year: " << "\n";
	cin >> year;
	if (year%400) {
		cout << "This is a leap year!" << "\n";
	}
	else if (year%4 and not year%100) {
		cout << "This is a leap year!!" << "\n";
	}
	else
		cout << "This is not a leap year!" << "\n";
}
