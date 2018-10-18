#include <iostream>
#include <string>
#include "Teacher.h"
#include "Person.h"

Teacher::Teacher() : Person(){}
Teacher::~Teacher(){}

Person::Person(){}
Person::~Person(){}

using namespace std;

int main(){
	
	Teacher Carol;
	Carol.SetAge(87);
	Carol.SetSubject("SexED");
	
	cout << "Carol's profile: " << endl;
	Carol.ShowProfile();
	
}
