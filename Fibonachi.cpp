#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	double n, x1, x0, x;
	x0 = 0; x1 = 1;
	cout << "n ";
	cin >> n;
	if (n < 2) {
		x = n;
	}
	else {
		for (int i = 0; i < n - 1; i++) {
			x = x0 + x1;
			x0 = x1;
			x1 = x;
		}
	}
	cout << x;
	_getch();
	return 0;
}