// https://open.kattis.com/problems/missingnumbers

#include <iostream>

using namespace std;

int main () {

    int n, i, j, count, pgj=0, size;
    cin >> n;

    int main[n];

    for (i=0; i<n; i++){
        cin >> main[i];
    }

    size = main[n-1];

    int cor[size];

    for (i=0; i<size; i++){
        cor[i]=(i+1);
    }

    for (i=0; i<size; i++){
        count=0;
        for (j=0; j<n; j++){
            if (cor[i]==main[j]){
                count++;
            }
        }
        if (count==0){
            cout << cor[i] << endl;
            pgj++;
        }
    }

    if (pgj==0){
        cout << "good job";
    }

    return 0;

}