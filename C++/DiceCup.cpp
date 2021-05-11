// https://open.kattis.com/problems/dicecup

#include <iostream>
#include <math.h>

using namespace std;

int main () {

    int n, m, i, least, highest;

    cin >> n >> m;

    highest = fmax(m,n);
    least = fmin(m,n);

    for (i=(least+1); i<=(highest+1); i++){
        cout << i << endl;
    }

}
