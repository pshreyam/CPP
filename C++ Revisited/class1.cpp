#include <iostream>

using namespace std;

class Pizza {
	private:
		int cost;
		
	public:
		int getCost() {
			return this->cost;
		}
		
		void setCost(int c) {
			cost = c;
		}
};

int main() {
	Pizza pizza1;
	pizza1.setCost(250);
	cout << pizza1.getCost() << endl;
	return 0;
}
