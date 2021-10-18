
#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int h) {

	int* temp1 = new int[m - l]; //left
	int* temp2 = new int[h - (m + 1)]; //right
	int u = 0;
	for (int z = l; z <= m; ++z) {
		temp1[u] = arr[z];
		++u;
	}
	int y = 0;
	for (int q = m + 1; q <= h; ++q) {
		temp2[y] = arr[q];
		++y;
	}
	int k1 = 0;
	int k2 = 0;
	int k3 = 0;
	int total = u + y;

	int* C = new int[total]; //dynamic array that is of the size of both sub arrays A and B
	for (int i = 0; i < total; ++i) {
		C[i] = 0;
	}

	while (k1 < u && k2 < y) {

		if (temp1[k1] <= temp2[k2]) {
			C[k3++] = temp1[k1++];

		}
		else {
			C[k3++] = temp2[k2++];
		}

	}

	while (k1 < u) {
		C[k3++] = temp1[k1++];
	}
	while (k2 < y) {
		C[k3++] = temp2[k2++];
	}
	int z = 0;
	for (int q = l; q <= h; ++q) {
		arr[q] = C[z];
		++z;
	}

}


	 







void  mergesort(int arr[], int l, int h) {

	if (l == h) {
		return;
	}
	int m = (l + h) / 2;
	mergesort(arr, l, m);
	mergesort(arr, m + 1, h);
	merge(arr, l, m, h);


}

int main()
{
	int arr[] = { 38, 27, 43, 3, 9, 82,10 };
	auto arr_size = sizeof(arr) / sizeof(arr[0]);

	cout << "Given array is \n";


	mergesort(arr, 0, arr_size - 1);

	for (int d = 0; d <=arr_size-1 ; ++d) {
		cout << arr[d] << endl;

	}

}