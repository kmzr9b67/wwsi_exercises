#include <iostream>
using namespace std;

int my_arr[] = {1,3, 8, 25,2,18, 0, -19, 14, 22, -21, -100, -32};
int main() {
    int temp;
    int zap, max, wyk;
    for (int i=0; i <sizeof(my_arr)/sizeof(my_arr[0]); i++ ) {
        for (int j=0; j <sizeof(my_arr)/sizeof(my_arr[0])-i; j++ ) {
            if (j == 0 or my_arr[j]>max) {
                max = my_arr[j];
                zap = j;
            }
        }
        temp = my_arr[sizeof(my_arr)/sizeof(my_arr[0])-i-1];
        my_arr[sizeof(my_arr)/sizeof(my_arr[0])-i-1] = max;
        my_arr[zap] = temp;
    }
    cout << "String" << "\n";
    for (int i : my_arr) {
        cout << i << "\n";
    }
    return 0;
}
