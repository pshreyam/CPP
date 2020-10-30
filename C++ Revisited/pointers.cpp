#include <iostream>
#include <cstring>

using namespace std;

struct Person {
	char name[50];
	int age;
	int balance;
};

int main() {
	Person bill;
	
	strcpy(bill.name, "Hari");
	bill.age = 25;
	bill.balance = 100000;
	
	Person* bill_pointer = &bill;
	
	strcpy(bill_pointer->name, "Ram");
	
	cout << bill_pointer->name;
	
	return 0;
}
