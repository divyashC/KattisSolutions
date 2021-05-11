// https://open.kattis.com/problems/sibice

#include <iostream>
#include <math.h>

using namespace std;

int main () {

    int i, testc, w, h, tallest, num;
    cin >> testc >> w >> h;

    tallest = sqrt( (pow(w,2)) + (pow(h,2)) );

    for (i=0; i<testc; i++){
        cin >> num;

        if (num<=tallest){
            cout << "DA" << endl;
        }
        else {
            cout << "NE" << endl;
        }
    }

    return 0;

}
