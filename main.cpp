#include <iostream>
using namespace std;

class Base {
	public:
		void show () {
			cout << "This is a virtual function. Function name - show()"<< endl;
		}
		
		void display (int x) {
			cout << "This is a virtual function Function name - display()" << endl;
			cout << "The square of " << x << " is " << x * x << endl;
		}
};

class Derived {
	public:
		void show () {
			cout << "This is a function from derived class Function name - show()"<< endl;
		}
		
		void display (int x) {
			cout << "This is a function from derived class Function name - display()" << endl;
			cout << "The cube of " << x << " is " << x * x << endl;
		}
};

int main() {
	Base obj;
	Base *ptr = &obj;
	ptr -> show();
	ptr -> display (10);
	
	return 0;
}
