#include <iostream>

using namespace std;

void roll(int &x, int &y) {
	y = 2 * x;
}

int main() {
	int a, b;
	a = 1;
	roll(a, b);
	cout << a << endl << b << endl;
	return 0; 
}
