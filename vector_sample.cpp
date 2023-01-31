//----------------------------------------------------------------------
// vector_sample.cpp
// 
// ways to traverse a vector
// 
// based on: https://www.w3schools.blog/cpp-vector
//----------------------------------------------------------------------

#include <iostream>  
#include <vector>  

// avoid using namespace std;
// use individual names instead
using std::cout;
using std::endl;
using std::string;
using std::vector;

//----------------------------------------------------------------------
// entry point
//----------------------------------------------------------------------
int main() {
	vector<string> vec;

	// fill vector
	vec.push_back("HELLO ");
	vec.push_back("CPP !!");

	// traditional for loop
	cout << "\ntraditional for loop\n";
	for (int i = 0; i < vec.size(); i++) {
		// don't change vector size inside the loop
		cout << vec.at(i);
	}
	cout << endl;

	// range-based for loop
	cout << "\nrange-based for loop\n";
	for (string s : vec) {
		cout << s;
	}
	cout << endl;

	// while loop with pop_backs
	cout << "\nwhile loop with pop_backs\n";
	while (!vec.empty()) {
		cout << vec.back();
		vec.pop_back();
	}
	cout << endl;

	// re-fill vector after pop_backs
	vec.push_back("BONJOUR ");
	vec.push_back("CPP !!");

	// while loop with erase first element
	cout << "\nwhile loop with erase first element\n";
	while (!vec.empty()) {
		cout << vec.front();
		vec.erase(vec.begin());
	}
	cout << endl;

	return 0;
}