// https://open.kattis.com/problems/batterup

#include <iostream>

using namespace std;

int main () {

    int i, n, x, total=0;
    double output=0;
    cin >> n;

    for (i=0; i<n; i++){
        cin >> x;
        if (x!=-1){
            output+=x;
            total++;
        }
    }

    cout << (output/total);

    return 0;

}
