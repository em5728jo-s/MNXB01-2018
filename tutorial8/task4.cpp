#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<string> vec;
	vec.push_back("Lovelace");
	vec.push_back("Meitner");
	vec.push_back("Wu");
	vec.push_back("Lamarr");
	vec.pop_back();
	vec.push_back("Rubin");
	vec[1] = "Jarlskog";
	vec.push_back("BellBurnell");
	vec.push_back("Gianotti");
	for (vector<string>::iterator i = vec.begin(); i != vec.end(); ++i)
		cout << "This is the content of my vector: " << *i << endl;
}
