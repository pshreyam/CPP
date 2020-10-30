#include <iostream>

using namespace std;

int x = 100;

// Use of scope resolution operator for accessing variable x in the global namespace
// Other use:
//   -> defining functions and variables outside of the class

int main() {
	int x = 5;
	// For local variable
	cout << x << endl;
	// For global variable
	cout << ::x << endl;
	return 0;
}
