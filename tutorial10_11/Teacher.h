#include <iostream>
#include <string>
#include "Person.h"
#ifndef Teacher_H
#define Teacher_H

using namespace std;

class Teacher : public Person
{

	public:
		Teacher();
		~Teacher();
		
		//int GetAge() {return age;};
			//void SetAge(int NewAge) {age=NewAge;};
		string GetSubject() {return subject;};
			void SetSubject(string NewSubject) {subject=NewSubject;};
		
		void ShowProfile() {

			cout << "Age: " << age;

			cout << "\nSubject: " << subject << endl;
			
		};
	
	private:
		//int age;
		string subject;
	
};
#endif
