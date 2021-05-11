// https://open.kattis.com/problems/greetings2

#include <iostream>

using namespace std;

int main () {

    string input;
    cin >> input;

    string output;
    output = 'h';

    int i,e=0;

    for (i=0; i<input.length(); i++){
        if (input[i]=='e'){
            e++;
        }
    }

    for (i=0; i<(2*e); i++){
        output = output + 'e';
    }

    output += 'y';

    cout << output;

    return 0;

}
