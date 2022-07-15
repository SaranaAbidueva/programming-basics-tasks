#include <iostream>

int main() {
	int n, c, y;
	int x = 1;
	std:: cin >> n;
	int **array = new int*[2];
	for (int i = 0; i < 2; i++)
		array[i] = new int[n];
	for (int i = 0; i < n; i++) {
		  std::cin >> c >> y;
		  array[0][i] = c;
		  array[1][i] = y;
	}
	for (int i = n-1; i >=0 ; i--) {
		if (array[0][i] == 1) {
			x = x / array[1][i];
		}
		if (array[0][i] == 2) {
			x = x - array[1][i];
		}
		if (array[0][i] == 3) {
			x = array[1][i] + x;
		} 
		if (x < 1){
			x = 1;
		}
	}
	for (int i = 0; i < 2; i++) {
		delete[] array[i];
	}

	std::cout << x;
	return 0;
}