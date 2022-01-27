// https://open.kattis.com/problems/fizzbuzz

#include <iostream>

using namespace std;

int main () {

    int quest, i, marks=0;
    cin >> quest;
    char ans[quest];

    for (i=0; i<quest; i++){
        cin >> ans[i];
    }

    if (ans[0]=='A'){
        marks++;
    }

    if (ans[1]=='A'){
        marks++;
    }

    if(ans[2]=='A'){
        marks++;
    }

    cout << marks;

}
