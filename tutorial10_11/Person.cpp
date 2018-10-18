#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person::Person(){}
Person::~Person(){}

int main(){
	
	Person Charlotte;
	Charlotte.SetAge(53);
	Charlotte.SetShoe(39);
	Charlotte.SetHair("Short");
	
	cout << "Charlotte's profile: " << endl;
	Charlotte.ShowProfile();
	
}
	
