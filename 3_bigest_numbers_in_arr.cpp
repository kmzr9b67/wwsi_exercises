#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int first , second, third;
    srand(time(NULL));
    int b = rand()%100+1;
    int my_arr[b];
    for (int i=0; i < b; i++) my_arr[i] = rand()%100-0;
    for (int i = 0; i<sizeof(my_arr)/sizeof(my_arr[0]); i++) {
        if (first < my_arr[i] or i == 0) {
            third = second;
            second = first;
            first = my_arr[i];
        }
        else {
            if (second < my_arr[i] or i == 1) {
                third = second;
                second = my_arr[i];
            }
            else {
                if (third < my_arr[i] or i == 2) third = my_arr[i];
            }
        }
    }
    if (b<3) {
        if (b<2) cout << first;
        else cout << first << " " << second;
    }
    else {
        cout << first << " " << second << " " << third;
    }
    return 0;
}
