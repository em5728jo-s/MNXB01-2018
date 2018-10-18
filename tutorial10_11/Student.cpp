#include <iostream>
#include <string>
#include "Student.h"
#include "Person.h"

using namespace std;

Student::Student() : Person(){}
Student::~Student(){}

Person::Person(){}
Person::~Person(){}

int main(){
	
	Student Emma;
	Emma.SetAge(24);
	Emma.SetGPA(4.0);
	Emma.SetID("2A");
	
	Student Carl;
	Carl.SetAge(23);
	Carl.SetGPA(3.6);
	Carl.SetID("2B");
	
	cout << "Emma's profile: " << endl;
	Emma.ShowProfile();
	cout << "\nCarls's profile: " << endl;
	Carl.ShowProfile();
	
}
