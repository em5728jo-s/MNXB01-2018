//It took about 1 hour to complete this homework, maybe a little bit longer.

#include <iostream>
#include <cctype>

using namespace std;

int add(int a, int b) // passing to a function by value
{
	// Modify so that the function returns sum of two integers
	int c = a + b;
	cout << "a + b = " << c;
}
void increaseByOne(int *a, int *b)
{
	*a = *a + 1;
	*b = *b  + 1;
	// Modify so that the function adds one to each value (a -> a+1, b -> b+1)
}
void swap(int &a, int &b)
{
	int d = a;
	a = b;
	b = d;
	// Modify so that the function swaps values a and b
}
// Bonus points:
void convertToUpperCase(char *strPtr)
{
	int i = 0;
	while  (strPtr[i])
		{
		if (islower(strPtr[i]))
			{strPtr[i]=toupper(strPtr[i]);
		}
		i++;
	}
}
		
	// Modify so that the function converts lowercase letters to uppercase letters.
	// You may find this helpful: http://www.cplusplus.com/reference/cctype/

int main()
{
	int a = 3;
	int b = 5;
	cout << "add() function\n";
	add(a, b); //a + b = 8
	cout << "\nincreaseByOne() function\n";
	increaseByOne(&a, &b);
	//call increaseByOne() function
	cout << "a = " << a << "\tb = " << b << endl; // a = 4 b = 6
	cout << "swap() function\n";
	swap(a, b);
	//call swap() function
	cout << "a = " << a << "\tb = " << b << endl; // a = 6 b = 4
	// bonus:
	char text[] = "mnxb01/nafy018 is the best course";
	convertToUpperCase(text);
	cout << text << endl; // MNXB01/NAFY018 IS THE BEST COURSE
	return 0;
}
