#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	cout << "list size ";
	int N, k, t;
	int *A;
	cin >> N;
	A = new int[N];
	cout << "fill in the list ";
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	cout << "shift amount ";
	cin >> k;
	for (int j = 0; j < N - (k % N); j++) {
		t = A[N - 1];
		for (int i = N - 1; i > 0; i--) {
			A[i] = A[i - 1];
		}
		A[0] = t;
	}
	for (int j = 0; j < N; j++) {
		cout << A[j];
	}
	delete[] A;
	_getch();
	return 0;
}