// https://open.kattis.com/problems/sevenwonders

#include <iostream>
#include <math.h>

using namespace std;

int main () {

    int i, t=0, c=0, g=0;

    string input;
    cin >> input;

    for (i=0; i<(input.length()); i++){
        if (input[i]=='T'){
            t++;
        }
        if (input[i]=='C'){
            c++;
        }
        if (input[i]=='G'){
            g++;
        }
    }

    cout << ((pow(t,2))+(pow(c,2))+(pow(g,2))+ (min(min(t, c), g) * 7) );

    return 0;

}
