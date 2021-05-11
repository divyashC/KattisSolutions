// https://open.kattis.com/problems/chanukah

#include <iostream>

using namespace std;

int main () {

    int i, tc, j, temp;

    cin >> tc;

    int totalc[tc], tn[tc];

    for (i=0; i<tc; i++){
        cin >> tn[i] >> totalc[i];
        temp = 0;
        for (j=1; j<=totalc[i]; j++){
            temp+=j;
        }

        totalc[i]+=temp;

    }

    for (i=0; i<tc; i++){
        cout << tn[i] << " " <<totalc[i]<< endl;
    }

    return 0;

}
