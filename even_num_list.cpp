#include <iostream>
using namespace std;

int *is_even(int *arr, int size);

int main() {
    int myarr[] = {112,23,5,4,6,9,10,11232, 0};
    int* name = is_even(myarr,sizeof(myarr)/sizeof(myarr[0]));

    for (int i=0; i<sizeof(myarr)/sizeof(myarr[0]);i++) {
        cout << name[i] << ', ';
    }
    delete[] name;
    return 0;
}

int *is_even(int *arr, int size) {
    int* tablica = new int[size];
    int c=0;
    for (int i=0; i<size; i++) {
        if (arr[i]%2 ==0) {
            tablica[c] = arr[i];
            c+=1;
        }
    }
    int* new_table = new int[c];
    for (int j=0; j<c; j++) {
        new_table[j] = tablica[j];
        cout << new_table[j] << '\n';
    }
    delete[] tablica;
    return new_table;
}
