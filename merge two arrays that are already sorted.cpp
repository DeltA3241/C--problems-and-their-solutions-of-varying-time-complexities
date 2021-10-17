
#include <iostream>
using namespace std;

void merge(int A[], int B[], int s1, int s2) {
	int k1 = 0;
	int k2 = 0;
	int k3 = 0;
	int total = s1 + s2;

	int * C = new int[total]; //dynamic array that is of the size of both sub arrays A and B
	for (int i = 0; i < total; ++i) {
		C[i] = 0;
	}

	while (k1 < s1 && k2 < s2) {

		if (A[k1] <= B[k2]) {
			C[k3++] = A[k1++];

		}
		else  {
			C[k3++] = B[k2++];
		}
	
	}

	while(k1 < s1) {
	  C[k3++] = A[k1++];
 }
	while (k2 < s2) {
	  C[k3++] = B[k2++];
	}

	for (int q = 0; q < total; ++q) {
		cout << C[q] << endl;
	}

}

int main()
{
	int x,y;
	cout << "please input the number of the items" << endl;
	cin >> x;
	cout << "please input the number of the items for the second array" << endl;
	cin >> y;

	int* array1 = new int[x];
	int* array2 = new int[y];
	cout << "please input the items for array1" << endl;
	for (int z = 0; z < x; ++z) {
		cin >> array1[z];
	}
	cout << "please input the items for array2" << endl;
	for (int t = 0; t < y; ++t) {
		cin >> array2[t];
	}
	cout << endl;
	merge(array1, array2, x, y);
}

