#include <iostream>
using namespace std;

int main() {
	int a = 1;
	int b = 1;
	int c;
	cout << a << endl << b << endl;
	for (int i=0; i<10; i++) {
		c = a + b;
		b = a;
		a = c;
		cout << c << endl;
	}
	return 0;
}
