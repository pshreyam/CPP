#include <iostream>
#include <cstring>

using namespace std;

struct Person {
	char name[50];
	int age;
	int balance;
};

int main() {
	struct Person bill;
	
	strcpy(bill.name, "Hari");
	bill.age = 25;
	bill.balance = 100000;
	
	cout << bill.name;
	cout << bill.age;
	cout << bill.balance;
	
	return 0;
}
