#include <iostream>
using namespace std;

class Base {	//abstract class
	public:
		//virtual function. the keyword 'virtual' is necessary.
		virtual void show () {
			cout << "Virtual function. Function name - show()"<< endl;
		}
		
		virtual void display (int x) {
			cout << "Virtual function Function name - display()" << endl;
			cout << "The square of " << x << " is " << x * x << endl;
		}
};

class Derived: public Base {	//not an abstract class, a derived class
	public:
		//not virtual function.
		void show () {
			cout << "Derived class function. Function name - show()"<< endl;
		}
		
		void display (int x) {
			cout << "Derived class function. Function name - display()" << endl;
			cout << "The cube of " << x << " is " << x * x << endl;
		}
};

int main() {
	Base obj;	//base class object
	Derived drobj;	//derived class object
	Base *ptr = &obj;
	ptr -> show();
	ptr -> display (10);
	
	ptr = &drobj;
	ptr -> show();
	ptr -> display (20);
	
	return 0;
}
