#include <iostream>

void increaseAgeByRef(int &myAge){
	int myAge1;
	myAge1 = *&myAge + 1;
	std::cout << myAge1;
}

void increaseAgeByPtr(int *myAge){
	std::cout << myAge + 1;
}

void increaseAge(int myAge){
	myAge = myAge + 1;
	std::cout << myAge;
}

int main()
{
	int myAge = 30, *myAge3;
	*myAge = myAge3
	std::cout << "Original myAge: " << myAge << std::endl;
	std::cout << "Increased age: ";
	increaseAge(myAge); // Call increaseAge() to increase my age by 1
	std::cout << "\nNew myAge: " << myAge << std::endl; //is this working?
	// call different functions here and print the output
	std::cout << "Increased by Ref: ";
	increaseAgeByRef(myAge);
	std::cout << "\nIncreased by Pointer: ";
	increaseAgeByPtr(myAge3);
	// check if the address of myAge the same in increaseAgeByRef(), increaseAgeByPtr() and increaseAge() as it is in main()
	return 0;
}
