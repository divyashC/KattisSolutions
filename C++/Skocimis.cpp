// https://open.kattis.com/problems/skocimis

#include <iostream>

using namespace std;

int main () {

    int a, b, c, output;

    cin >> a >> b >> c;

    output = max(b-a, c-b);
    output--;

    cout << output;

    return 0;

}
