#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	struct Person {
		string name_;
		string occupation_;
		int age_;
		string name() const { 
			return name_; 
		}
		virtual string occupation() const = 0;
		virtual ~Person() {}
};
	struct Student : Person {
		string name() const { 
			return Person::name(); 
		}
		string occupation() const { return "Student"; }
	private:
		string uni_;
	};
	struct Professor : Person {
		string name() const { 
			return "Prof. " + Person::name();
		}
		string occupation() const { return "Professor"; }
	};
	Professor pr("Stroustrup");
	      // cout << pr.name() << endl;
	Person *p = &pr;
	cout << p->name() << endl;
		// Person *p2 = next_person();
		// cout << p2->occupation;
	Person *p3 = new Student("Alex", 21, "Oxford");

	    // полиморфизм - возможность единообразно обрабатывать различные типы данных
}