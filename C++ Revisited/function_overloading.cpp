#include <iostream>

using namespace std;

int add(int a, int b) {
	// Adds two integers
	return a + b;
}

int add(int a, int b, int c) {
	// Adds 3 integers
	return a + b + c;
}

int main() {
	cout << add(1, 2) << endl;
	cout << add(2, 3, 4) << endl;
	return 0;
}
