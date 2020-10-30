#include <iostream>

int roll(int);

using namespace std;

int main() {
	int s = 2;
	cout << roll(s);
	return 0;
}

int roll(int x) {
	int s;
	s = x - 1;
	return s;
}
