#include <iostream>
#include <cstdio>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <list>

using namespace std;

bool is_leep_year(int year);
int days_in_year(int month,int year_is, int day);

int main(){
    int y,m,d;
    cout << "Podaj rok, miesiac, dzien";
    cin >> y >> m >>d;
    cout << days_in_year(m,is_leep_year(y),d);
    return 0;
}
bool is_leep_year(int year) {
    return (year %4 == 0 and year%100 == 0) or (year%400 == 0);
}

int days_in_year(int month,int year_is, int day) {
    int counter = 0;
    for (int i = 1; i<month; i++) {
        counter += 30;
        if (i <= 7){
            if (i%2 != 0) counter += 1;
            else if (i == 2) {
                counter -= 1;
                if (year_is == false) counter -= 1;
            }
        } else if (i%2 == 0) counter += 1;
    }
    return counter + day;
}
