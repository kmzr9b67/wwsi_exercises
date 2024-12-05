#include <iostream>
#include <cstdio>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <list>
using namespace std;

int my_arr[] = {1,3,2,18, -19, 14, -21};
int main() {
    int a;
    cout << "Enter the value: ";
    cin >> a;
    for (int i=0; i<sizeof(my_arr)/sizeof(my_arr[0]);i++) {
        if (my_arr[i] == a) {
            cout << i << '\n';
            return 0;
        }
    }
    cout<<"There is no such index.";
    return 0;
}
