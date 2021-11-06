
#include <iostream>
using namespace std;
void swap(int x, int y, int arr[]) {
    int temp;
    temp = arr[y];
    arr[y] = arr[x];
    arr[x] = temp;
}

int partition(int l, int h, int arr2[]) {
    int pivot = arr2[l];
    int lo = l;
    int hi = h;
    while (lo < hi) {
        do {
            ++lo;
        } while (pivot <= arr2[lo]);

        do {
            --hi;
        } while (pivot > arr2[hi]);

        if (lo < hi) {
            swap(lo, hi, arr2);
        }
    }
    swap(l , hi , arr2);

    return hi ;
 }

void quicksort(int l, int h, int arr[]) {
    
    if (l < h) {

        int j = partition(l, h, arr);
        quicksort(l, j - 1, arr);
        quicksort(j + 1, h, arr);
    }
}

void print(int s,int arr1[]) {
    for (int x = 0; x < s; ++x) {
        cout << arr1[x] << " ";
    }
}

int main()
{
    int arr[] = { 10,5,8,9,15,12,16,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    quicksort(0, size, arr);
    print(size, arr);
    return 0;
}
