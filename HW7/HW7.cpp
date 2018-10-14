// This file (HW7.cpp) contains a couple of functions that manipulate pointers. Your task is to edit the body (not the signature) of these functions so that printed output in the main function is correct.

// Learning outcomes: pointers and passing by a value, reference or pointer

#include <iostream>

using namespace std;

int add(int a, int b) // passing to a function by value
{
// Modify so that the function returns sum of two integers
}

void increaseByOne(int *a, int *b) 
{
// Modify so that the function adds one to each value (a -> a+1, b -> b+1)
}

void swap(int &a, int &b)
{
// Modify so that the function swaps values a and b
}

// Bonus points:
void convertToUpperCase(char *strPtr)
{
  // Modify so that the function converts lowercase letters to uppercase letters.  
  // You may find this helpful: http://www.cplusplus.com/reference/cctype/
} 

int main()
{

  int a = 3;
  int b = 5;

  cout << "add() function\n";
  cout << add(a,b) << endl; // 8

  cout << "increaseByOne() function\n";
  //call increaseByOne() function
  cout << "a = " << a << "\tb = " << b << endl; // a  = 4 b = 6

  cout << "swap() function\n";
  //call swap() function
  cout << "a = " << a << "\tb = " << b << endl; // b = 6 a = 4

  // bonus:
  char text[] = "mnxb01/nafy018 is the best course";
  convertToUpperCase(text);
  cout << text << endl; // MNXB01/NAFY018 IS THE BEST COURSE


  return 0;
}

