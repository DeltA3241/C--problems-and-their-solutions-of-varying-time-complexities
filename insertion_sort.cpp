#include<iostream>
using namespace std;
int index = 0;
void insertionsort(int arr[], int s) {
	for (int z = 1; z < s; ++z) {
		int key = arr[z];
		 index = z - 1;
		while (index >= 0 && arr[index] > key) {
			arr[index + 1] = arr[index];
			index = index - 1;
		}
		arr[index + 1 ] = key;
	}
}

void printresult(int arr[], int s) {
	for (int x = 0; x < s; ++x) {
		cout << arr[x] << endl;
}
}
int main() {
	int arr[] = { 40,20,60,10,50,5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	insertionsort(arr, size);
	printresult(arr, size);
	return 0;
}