#include <iostream>
using namespace std;

void F(int * A, int * B, int N) {
	for (int i = 0; i < N; i++) {
		B[i] = 1;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (j != i) B[i] = B[i] * A[j];
		}
	}
}
int main() {
	int N;
	cout << "N=";
	cin >> N;
	int* A = new int[N];
	int* B = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	F(A, B, N);
	for (int i = 0; i < N; i++) {
		cout << B[i] << " ";
	}
	cout << endl;
	return 0;
}