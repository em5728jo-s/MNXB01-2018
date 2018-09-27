#include <iostream>

//function declaration

int nameofthefunction(int,int);

int main() {
	//function call
	
	int a, b, Larger;
	std::cout << "Enter first number";
	std::cin >> a;
	std::cout << "Enter second number";
	std::cin >> b;
	Larger = nameofthefunction(a, b);
	std::cout << "The larger number is" << Larger;
}

//function definition

int nameofthefunction(int A, int B){
	
	if (A<B){
		return B;}
	else return A;
}
