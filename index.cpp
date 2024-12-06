#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int a ;
    srand(time(NULL));
    int b = rand()%100+1;
    cout << "Enter the value: ";
    cin >> a;
    cout <<b << "\n";
    int my_arr[b];
    for (int i=0; i < a; i++) my_arr[i] = rand()%100-100;
    for (int i=0; i< sizeof(my_arr)/sizeof(my_arr[0]); i++) {
        if (my_arr[i] == a) {
            cout << i << '\n';
            return 0;
        }
    }
    cout<<"There is no such index.";
    return 0;
}
