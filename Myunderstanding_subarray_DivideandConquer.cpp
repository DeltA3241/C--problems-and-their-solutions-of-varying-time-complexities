
#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

int max(int a, int b) {

	if (a > b) {
		return a;
	}
	else {
		return b;
	}


}

int max2(int a, int b, int c) {

	if (max(a, b) < c) {
		return c;
	}
	else {
		return max(a, b);
	}
}


int crossingsum(int arr[], int l, int h, int mid) {

	int s1 = INT_MIN;
	int s2 = INT_MIN;
	int s3 = 0;
	int s4 = 0;

	for (int z = mid; z >= l;--z) {
		s3 = s3 + arr[z];
		if (s3 >= s1) {
			s1 = s3;
		}
	}
	for (int u = mid + 1; u <= h; ++u) {
		s4 = s4 + arr[u];
		if (s4 >= s2) {
			s2 = s4;
		}
	}

	return max2(s1,s2,s1+s2);
}




int maxmium_subarray(int arr1[], int s, int l, int h) {



	if (l < h) {

		int mid = (h + l) / 2;
		int leftsidesum = maxmium_subarray(arr1, s, l, mid);
		int rightsidesum = maxmium_subarray(arr1, s, mid + 1, h);
		int centersidesum = crossingsum(arr1, l, h, mid);

		return (max2(leftsidesum, rightsidesum, centersidesum));
	}

	else
	{
		return arr1[l];
	}


}


int main()
{
	int Arr[] = {-2,1,-3,4,-1,2,1,-5,4};
	int size = sizeof(Arr) / sizeof(Arr[0]);
	cout << maxmium_subarray(Arr, size - 1, 0, size - 1) << endl;
	return 0;
}
