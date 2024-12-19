#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <list>
#include <cctype>
#include <string>
using namespace std;

int  main() {
    string n;
    int counter =0;
    cout << "Podaj string: " << '\n';
    getline(cin, n);
    for (int i=0; i< size(n); i++) {
        if (isalpha(n[i])) {
            // cout << n[i] << '\n';
            counter +=1;
        }else {
            n.erase(i,1);
        }
    }
    cout << n << '\n';
    for (int i=0; i<counter/2; i++) {
        if (n[i] == n[counter-i]) {
            cout << n[i] << '\n';
        }
        else {
            cout << 'nie jest' << '\n';
        }
    }
    cout << "Jest." << '\n';
    return 0;
}
