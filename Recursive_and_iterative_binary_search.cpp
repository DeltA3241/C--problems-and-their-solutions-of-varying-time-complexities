

#include <iostream>
using namespace std;
struct values {
	bool didwefindit;
	int wheredidwefindit;
};
values binarysearch( int value, int arr1[], int start, int end) {
	values v1;

	while (start <= end) {
		int mid = (end + start) / 2;

		if (arr1[mid] == value) {
			v1 = { 1 , mid };
			return v1;
		}
		else if (arr1[mid] > value) {
			end = mid - 1;
		}
		else if (arr1[mid] <= value) {
			start = mid + 1;
		}

	}
	values v3 = { 0,0 };
	return v3;
}
bool binary_recursive(int value,int arr2[], int s, int e) {

	if (s == e) {
		if (arr2[s] == value) {
			return true;
		}
		else {
			return false;
		}

}

	else {
		int mid = (s + e) / 2;


		if (arr2[mid] == value) {
			return true;
		}
		else if (arr2[mid] > value) {
			binary_recursive(value, arr2, s, mid - 1);
		}
		else if (arr2[mid] <= value) {
			binary_recursive(value, arr2, mid + 1, e);
		}


	}
}
int main()
{   
	bool t;
	int x;
	values v2;
	int Arr[] = { 2,6,13,21,36,47,63,81,97 };
	int s = sizeof(Arr) / sizeof(Arr[0]);
	cout << "enter the number you want to find" << endl;
	cin >> x;
	v2 = binarysearch(x ,Arr, 0, s - 1);
	cout << v2.didwefindit << endl;
	cout << v2.wheredidwefindit << endl;
	t = binary_recursive(x, Arr, 0, s - 1);
	cout << t << endl;
}

