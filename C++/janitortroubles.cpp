// https://open.kattis.com/problems/janitortroubles

#include <iostream>
#include <math.h>

using namespace std;

int main() {

    double a, b, c, d, s, output;

    cin >> a >> b >> c >> d;

    s = (a+b+c+d)/2;
    output = sqrt((s-a)*(s-b)*(s-c)*(s-d));
    
    cout << output;

    return 0;

}