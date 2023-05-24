#include <iostream>


int TransposFunc(int* arr, int num, int arrSize);

int main() {

	int key[] = { 3, 2, 1, 6, 5 };

	for (int i = 0; i < 5; i++) {
		std::cout << "Index of the number 5 is: " << TransposFunc(key, 5, 5) << ".\n";
	}
}

int TransposFunc(int* arr, int num, int arrSize) {

	int indexNum = 0;

	for (int i = 0; i < arrSize; i++) {
		if (arr[i] == num) {

			indexNum = i;

			if (indexNum == 0) {
				break;
			}
			else {
				std::swap(arr[i], arr[i - 1]);
			}
		}
	}

	return indexNum;
}