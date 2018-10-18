#include <iostream>
#include <string>
#ifndef Person_H
#define Person_H

using namespace std;

class Person
{

	public:
		Person();
		~Person();
		int age;
		
		int GetAge() {return age;};
			void SetAge(int NewAge) {age=NewAge;};
		int GetShoe() {return shoe;};
			void SetShoe(double NewShoe) {shoe=NewShoe;};
		string GetHair() {return hair;};
			void SetHair(string NewHair) {hair=NewHair;};
		
		void ShowProfile() {

			cout << "Age: " << age;

			cout << "\nShoe size: " << shoe;
			
			cout << "\nHaircut: " << hair << endl;

		};
	
	private:
		
		int shoe;
		string hair;
	
};

#endif
