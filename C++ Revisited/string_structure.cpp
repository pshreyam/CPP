#include <iostream>
#include <string>

using namespace std;

struct Person {
	string name;
	int age;
	int balance;
};

int main() {
	Person bill;
	
	bill.name = "Hari";
	bill.age = 25;
	bill.balance = 100000;
	
	cout<< bill.name << endl;
	cout<< bill.age << endl;
	cout<< bill.balance << endl;
	
	return 0;
}
