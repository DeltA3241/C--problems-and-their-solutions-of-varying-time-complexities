

#include <iostream>
#include <limits>
using namespace std;


int maxmiumsum(int arr[], int s) {
	int temp = 0;
	int max = INT_MIN;
	for (int x = 1; x <= s; ++x) {
		for (int u = 0; u < s; ++u) {

			if (u + x > s) {
				break;
			 }
			for (int z = u; z <= u + x - 1; ++z) {
				temp = temp + arr[z];
		}
		 if (temp >= max) {
					max = temp;
				}
		 temp = 0;
		}
	}
	return max;
}





int main()
{
	int Arr[] = { -2,-3,4,-1,-2,1,5,-3 };
	int size = sizeof(Arr) / sizeof(Arr[0]);
	cout << maxmiumsum(Arr, size - 1) << endl;

 return 0;
}
