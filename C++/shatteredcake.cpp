// https://open.kattis.com/problems/shatteredcake

#include <iostream>

using namespace std;

int main () {

    int w, n, i, x, y, total=0;
    cin >> w;
    cin >> n;

    for (i=0; i<n; i++) {
        cin >> x >> y;
        total += (x*y);
    }

    cout << (total/w);

    return 0;

}
