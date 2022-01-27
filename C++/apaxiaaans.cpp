// https://open.kattis.com/problems/apaxiaaans

#include <iostream> 

using namespace std;

int main () {

    int i;
    string input;

    cin >> input;

    cout << input[0] << input[1];

    for (i=2; i<input.length(); i++){

        if (input[i]=='o'){
            continue;
        }

        else {
            cout << input[i];
        }
        
    }

}