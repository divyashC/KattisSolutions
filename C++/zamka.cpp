// https://open.kattis.com/problems/zamka

#include <iostream>

using namespace std;

int getnum(int n) {

    int sum = 0;

    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {

    int min, max, dig, i;
    cin >> min >> max >> dig;

    for(i=min; i<=max; i++) {

        if(getnum(i) == dig) {
            cout << i << endl;
            break;
        }

    }

    for(i=max; i>=min; i--) {

        if(getnum(i) == dig) {
            cout << i << endl;
            break;
        }

    }
}