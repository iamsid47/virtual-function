#include <iostream>
using namespace std;

class Base {
	public:
		void show () {
			cout << "This is a virtual function"<< endl;
		}
		
		void display (int x) {
			cout << "This is a virtual function" << endl;
			cout << "The square of " << x << " is " << x * x << endl;
		}
};

class Base {
	public:
		void show () {
			cout << "This is a function from derived class"<< endl;
		}
		
		void display (int x) {
			cout << "This is a function from derived class" << endl;
			cout << "The cube of " << x << " is " << x * x << endl;
		}
};

int main() {
	return 0;
}
