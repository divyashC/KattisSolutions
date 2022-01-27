// https://open.kattis.com/problems/quickbrownfox

#include <iostream>

using namespace std;

int main () {

    string input;
    int i, n, j;
    cin >> n;

    for (i=0; i<n; i++){
        for (j=0; j<(input.length()); j++){
            getline(cin, input);
        }
    }

    return 0;

}
