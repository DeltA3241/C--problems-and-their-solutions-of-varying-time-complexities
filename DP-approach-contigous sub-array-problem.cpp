
#include <iostream>
#include<limits>
using namespace std;
int MAX = INT_MIN;

struct indices {
    int x;
    int y;
    int value;
};


indices kadane(int arr[], int s) {
    int low = 0;
    int high = 0;
    int sum = 0;
    indices i1;
    for (int n = 0; n < s; ++n) {
        if (sum == 0) {
            low = n;
        }
        sum = sum + arr[n];
        if (MAX <= sum) {
            MAX = sum;
            high = n;
        }
        if (sum < 0) {
            sum = 0;
        }



    }
    i1.x = low;
    i1.y = high;
    i1.value = MAX;
 
    return i1;

}









int main()
{
    indices i2;
    int arr[] = {-5,-6, -3, 7, -6 };
    int size = sizeof(arr) / sizeof(arr[0]);
    i2=kadane(arr, size - 1);
    cout << i2.x << endl;
    cout << i2.y << endl;
    cout << i2.value << endl;
    return 0;
}
