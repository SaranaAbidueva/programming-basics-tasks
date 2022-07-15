#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	cout << "insert coordinates \n";
	char x; int y = 0;
	cin >> x >> y;
	if ((int(x) - int('a') + 1 + y) % 2 == 0) {
		cout << "black";
	}
	else cout << "white";
	_getch();
	return 0;
}