// https://open.kattis.com/problems/quickestimate


#include <iostream>

using namespace std;

int main () {

    int i, n;
    string num;

    cin >> n;

    for (i=0; i<n; i++){
        cin >> num;
        cout << num.length() << endl;
    }

    return 0;

}
