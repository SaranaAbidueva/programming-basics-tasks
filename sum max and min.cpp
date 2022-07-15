#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int A[1000], max, min, n;
	cout << "list size ";
	cin >> n;
	cout << "fill in the list ";
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	max = A[1]; min = A[0];
	for (int i = 1; i < n; i = i + 2) {
		if (A[i] > max) {
			max = A[i];
		}
	}
	for (int i = 0; i < n; i = i + 2) {
		if (A[i] < min) {
			min = A[i];
		}
	}
	cout << max + min;
	_getch();
	return 0;
}