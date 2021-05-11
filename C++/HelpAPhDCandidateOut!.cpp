//https://open.kattis.com/problems/helpaphd

#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;

int main () {

    int i, n, a, b, num;
    string input;

    cin >> n;

    for (i=0; i<n; i++){

        cin >> input;
        stringstream name(input);
        input[1] = 0;

        name >> num;

        if (input[0] == '1'){
            a = 1;
        }
        else {
            a = num%100;
        }

        b = num%10;

        if ( input[0] == 'P'){
            cout << "skipped" << endl;
        }

        else {
            cout << (a+b) << endl;
        }

    }

}
