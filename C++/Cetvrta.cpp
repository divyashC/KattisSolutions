// https://open.kattis.com/problems/cetvrta

#include <iostream>

using namespace std;

int main () {

    int arr [2][3], i, first;
    cin >> arr[0][0] >> arr[1][0];
    cin >> arr[0][1] >> arr[1][1];
    cin >> arr[0][2] >> arr[1][2];

    for (i=0; i<2; i++){

        first = arr[i][0];

        if (arr[i][1] == first){
            cout << (arr[i][2]) << " ";
        }
        else if (arr[i][2] == first){
            cout << (arr[i][1]) << " ";
        }
        else
           cout << (first) << " ";
    }

    return 0;

}
