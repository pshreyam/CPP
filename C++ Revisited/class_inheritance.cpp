#include <iostream>
#include <string>

using namespace std;

class Book {
	protected:
		string name;	
		int pages;
		float price;
		string category;
	public:
		Book(string name, int pages, float price, string category) {
			this->name=name;
			this->pages=pages; 
			this->price=price;
			this->category=category;
			cout << "-----Base-----" << endl;
		}	
		
		string get_category() {
			return this->category;
		}
};

class ScienceBook : protected Book{
	public:
		ScienceBook(string name, int pages, float price, string category="Science") : 
		Book(name, pages, price, category) {
			cout << "-----Derived-----" << endl;
		}
		
		// overiding function
		string get_category() {
			return this->category;
		}
};


/* Abstraction
-> For abstract class, there must be a pure virtual function (i.e. let it be in the Book class)
-> virtual string get_category()=0;
*/


int main() {
	Book book1("Nepali", 100, 150.00, "Nepali");
	ScienceBook sc1("Science", 600, 650.00);
	cout << sc1.get_category() << endl;
	cout << book1.get_category() << endl;
	return 0;
}
