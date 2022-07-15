#include <iostream>
using namespace std;

struct rectangle {
	explicit rectangle(double length=0, double width=0)
		: length(length), width(width)
	{}
	void set_length() {
		cout << "length=";
		double l;
		cin >> l;
		this->length=l;
	}
	void set_width(){
		cout << "width=";
		double w;
		cin >> w;
		this->width = w;
	}

	double area() {
		double s = length * width;
		return s;
	}
	void cout_area() {
		double s = this->area();
		cout << s;
	}
private:
	double length;
	double width;
};
int main() {
	rectangle r;
	r.set_length();
	r.set_width();
	r.cout_area();
	return 0;
}