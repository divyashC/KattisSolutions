// https://open.kattis.com/problems/electricaloutlets

#include <iostream>

using namespace std;

int main () {

    int noTC, i, noPS, j, total, temp;
    cin >> noTC;

    int output[noTC];

    for (i=0; i<noTC; i++){

        total = 0;

        cin >> noPS;

        for (j=0; j<noPS; j++){
            cin >> temp;
            total += temp;
        }
        output[i] = total - (noPS - 1);

    }

    for (i=0; i<noTC; i++){
        cout << output[i] << endl;
    }

}
