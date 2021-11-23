

#include <iostream>
#include <limits>
using namespace std;

int improvised_max_sum(int arr[] , int s) {
    int max = INT_MIN;
    int temp = 0;

    for (int u = 0; u < s; ++u) {
        temp = 0;
        temp = temp + arr[u];
        for (int x = u + 1; x <= s + 1; ++x) {
                
             if( temp >= max){
                 max = temp;
            }
             if (x >= s + 1) {
                 break;
             }
             temp = temp + arr[x];
        }
    }
    return max;
}
int main()
{
    int Arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    int size = sizeof(Arr) / sizeof(Arr[0]);
    cout<<improvised_max_sum(Arr, size);
    return 0;
}