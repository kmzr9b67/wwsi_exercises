#include <iostream>
using namespace std;

int my_arr[] = {1,3,25,2,18, 0, -19, 14, 22, -21, -100};
int main() {
    int temp;
    for (int i =0; i < sizeof(my_arr)/sizeof(my_arr[0])-1; i++) {
        for (int j=0; j<sizeof(my_arr)/sizeof(my_arr[0])-1-i; j++) {
            if (my_arr[j] > my_arr[j+1]) {
                temp = my_arr[j];
                my_arr[j] = my_arr[j+1];
                my_arr[j+1] = temp;
            }
        }
    }
    return 0;
}
