

#include <iostream>
using namespace std;
//utility function also possible but you can use library instead.
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


int maximumsumcrossing(int arr[], int l, int m, int h) {
	int sum1 = 0;
	int s1 = -9999999999;
	for (int x = m; x >= l; x--) {
		sum1 = sum1 + arr[x];
		if (sum1 >= s1) {
			s1 = sum1;
		}
	}
	int sum2 = 0;
	int s2 = -9999999999;
	for (int z = m+1; z <= h; z++) {
		sum2 = sum2 + arr[z];
		if (sum2 >= s2) {
			s2 = sum2;
		}
	}


	return(max2(s1, s2, s1 + s2));

}

 int maxsumarray(int arr[], int l, int h) {
	 
	 if (l == h) {
		 return arr[l];
	 }
		 int m = (l + h) / 2;
	     return(max2(maxsumarray(arr, l, m), maxsumarray(arr, m + 1, h), maximumsumcrossing(arr, l, m, h)));
}


int main()
{
	int A[] = { 10,-16,5,2,-1,7,-8,-5,3 };
	int n = sizeof(A) / sizeof(A[0]);
	int max_sum = maxsumarray(A, 0, n-1);
	printf("Maximum contiguous sum is %d\n", max_sum);
	return 0;

}




