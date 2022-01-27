// https://open.kattis.com/problems/schoolspirit

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

    int i, n, j, exp;
    double total=0, g=0;
    cin >> n;
    int x[n];

    for (i=0; i<n;  i++){
        cin >> x[i];
        total += x[i] * (pow(0.8,i));
    }

    cout << fixed << setprecision(10);
    cout << (total/5) << endl;

    for (i=0; i<n; i++){
        total=0;
        exp=0;
        for (j=0; j<n; j++){
            if (i!=j){
                total += x[j] * (pow(0.8,exp));
                exp++;
            }
        }
        total/=5;
        g+=total;
    }

    cout << fixed << setprecision(10);
    cout << (g/n);

    return 0;

}
