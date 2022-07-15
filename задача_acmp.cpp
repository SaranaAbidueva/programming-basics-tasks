#include <iostream>;
using namespace std;

int* mul45(int* a, const int size) {
	int* c;
	int len = 0;
	int i = 0;
	while (a[i] < 10) {
		len += 1;
		i++;
	}
	a[len] = 0;
	c = new int[size];
	for (int i = 0; i < size; i++) {
		c[i] = 0;
	}
	int b[2] { 5,4 };
	for (i = 0; i < 2; i++) {
		for (int j = 0; j < len; j++) {
			c[i + j] = c[i + j] + a[j] * b[i];
			if (c[i + j] > 9) {
				c[i + j + 1] += c[i + j] / 10;
				c[i + j] %= 10;
			}
		}
	}

	if (c[len+1] > 0) {
		c[len + 2] = 10;
	}
	else 
		if (c[len] > 0)
			c[len + 1] = 10;
	else c[len] = 10;
	return c;
	delete[] c;
}

void output(int* a, const int size) {
	int i = 0;
	int len = 0;
	while (a[i] < 10) {
		len += 1;
		i++;
	}
	for (i = len-1; i >=0; i--) {
		cout << a[i];
	}
}

int main() {
	int N;
	cin >> N;
	const int size = 2000;
	int* A = new int[size];
	for (int i = 2; i < size; i++) {
		A[i] = 0;
	}
	A[0] = 1;
	A[1] = 10;
	for (int i = 0; i < N; i++) {
		A = mul45(A, size);
	}
	output(A, size);	
	delete[] A;
	return 0;
}