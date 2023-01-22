#include <iostream>
using namespace std;

class Base {
	public:
		virtual void show () {
			cout << "Virtual function. Function name - show()"<< endl;
		}
		
		virtual void display (int x) {
			cout << "Virtual function Function name - display()" << endl;
			cout << "The square of " << x << " is " << x * x << endl;
		}
};

class Derived: public Base {
	public:
		void show () {
			cout << "Derived class function. Function name - show()"<< endl;
		}
		
		void display (int x) {
			cout << "Derived class function. Function name - display()" << endl;
			cout << "The cube of " << x << " is " << x * x << endl;
		}
};

int main() {
	Base obj;
	Derived drobj;
	Base *ptr = &obj;
	ptr -> show();
	ptr -> display (10);
	
	ptr = &drobj;
	ptr -> show();
	ptr -> display (20);
	
	return 0;
}
