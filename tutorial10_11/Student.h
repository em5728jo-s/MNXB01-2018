#include <iostream>
#include <string>
#include "Person.h"
#ifndef Student_H
#define Student_H

using namespace std;

class Student : public Person
{

	public:
		Student();
		~Student();
		
		//int GetAge() {return age;};
			//void SetAge(int NewAge) {age=NewAge;};
		double GetGPA() {return GPA;};
			void SetGPA(double NewGPA) {GPA=NewGPA;};
		string GetID() {return ID;};
			void SetID(string NewID) {ID=NewID;};
		
		void ShowProfile() {
			
			cout << "Age: " << age;

			cout << "\nGPA: " << GPA;
			
			cout << "\nID: " << ID << endl;

		};
	
	private:
		//int age;
		double GPA;
		string ID;
	
};
		
#endif
