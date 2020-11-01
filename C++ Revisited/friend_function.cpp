#include <iostream>
#include <string>

using namespace std;

// Friend functions are not the part of classes but have access to all the members of the class

class Book {
	private:
		string name;	
		int pages;
		float price;
	public:
		Book(string name, int pages, float price) {
			this->name=name;
			this->pages=pages; 
			this->price=price;
		}
		Book(Book &book) {
			this->name=book.name;
			this->pages=book.pages; 
			this->price=book.price;
		}
		
		friend int get_pages(Book &book);
		friend float get_price(Book book);
};

int get_pages(Book &book) {
	return book.pages;
}

float get_price(Book book) {
	return book.price;
}

int main() {
	Book book1("Nepali", 100, 150.00), book2("Science", 500, 650.00), book3(book2);
	cout << "Book1 Pages:" << get_pages(book1) << endl;
	cout << "Book1 Pages:" << get_pages(book1) << endl;
	cout << "Book3 Pages:" << get_pages(book3) << endl;
	cout << "Book3 Pages:" << get_pages(book3) << endl;
	return 0;	
}
