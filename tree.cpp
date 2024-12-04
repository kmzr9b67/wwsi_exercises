#include <iostream>
#include <cstdio>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <list>
using namespace std;

int main() {
    int a;
    cout << "Podaj liczbę pięter: ";
    cin >> a;
    for (int i = 0; i < a; i++) cout << " ";
    cout << "*" << endl;
    for (int j = 0; j < a; j++) {
        for (int k = 0; k < a-j-1; k++) cout << " ";
        cout << "&";
        for (int k = 0; k < 2*j+1; k++) cout << "#";
        cout << "&" <<"\n";
    }
    for (int z = 0; z < a; z++) cout << " ";
    cout << "H" << endl;
    return 0;
}
