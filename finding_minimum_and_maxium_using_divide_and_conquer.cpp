

#include <iostream>
#include <limits>
using namespace std;



void find_max_min(int arr[], int l, int h, int& min, int& max) {

	if (l < h) {
		int mid = (l + h) / 2;
		find_max_min(arr, l, mid, min, max);
		find_max_min(arr, mid + 1, h, min, max);
	}
	else {
		if (arr[l] > max) {
			max = arr[l];
		}
		if (arr[l] <= min) {
			min = arr[l];
		}
		return;
	}

}






int main()
{
	int arr[] = { 1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int max1 = INT_MIN;
	int min1 = INT_MAX;
	find_max_min(arr, 0, size - 1, min1, max1);
	cout << max1 << endl;
	cout << min1 << endl;
	return 0;
}

