// https://open.kattis.com/problems/lostlineup

#include <iostream>

using namespace std;

int main () {

    int n, i;
    cin >> n;

    int arr[n-1];

    for (i=0; i<(n-1); i++){
        cin >> arr[i];
    }

    cout << "1 " << n;

    for (i=0; i<(n-2); i++){
        cout << " " << (arr[i] + 1);
    }

    return 0;

}