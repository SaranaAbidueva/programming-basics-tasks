#include <iostream>

int binary_search(int list[], int n_elements, int item){
	int low = 0;
	int high = n_elements - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		int guess = list[mid];
		if (guess == item)
			return mid;
		if (guess > item)
			high = mid - 1;
		else low = mid + 1;
	}
	return -1;
}
int main() {
	int arr[] = { 1, 3, 5, 7, 9 };
	int x = 3;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result=binary_search(arr, n, x);
	result == -1 ? std::cout << "Element is not present in array"
		: std::cout << "Element is present at index " << result;
	return 0;
}