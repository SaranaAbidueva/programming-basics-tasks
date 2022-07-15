,#include <iostream>
#include <conio.h>
using namespace std;

int main()n 	d☺.801
	int a, b, k;
	cin >> a >> b;
	for (int i = 1; i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			k = i;
		}
	}
	int nok = k * (a / k) * (b / k);
	cout << "nok=" << nok;
	_getch();
	return 0;
}