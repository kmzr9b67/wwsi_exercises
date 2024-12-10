#include <iostream>
using namespace std;

int my_arr[] = {1, 2, 3, -4, 8, 25,-200, 2, 215,18, 0, -19, 14, 22, -21, -100, -32};
void selection(int my_arr[], int arr_size, int i);

int main() {
    int n = sizeof(my_arr)/sizeof(my_arr[0]);

    for (int i=0; i <n; i++ ) {
        selection(my_arr, n, i);
    }

    cout << "String" << "\n";
    for (int i : my_arr) {
        cout << i << "\n";
    }
    return 0;
}

void selection(int my_arr[], int arr_size, int i) {
    int max_index = 0;
    int max_value = my_arr[0];
    for (int j=1; j <arr_size-i; j++ ) {
        if (my_arr[j]>max_value) {
            max_value = my_arr[j];
            max_index = j;
        }
    }
    swap(my_arr[arr_size-i-1], my_arr[max_index]);
}
