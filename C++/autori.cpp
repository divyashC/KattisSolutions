// https://open.kattis.com/problems/autori

#include <iostream>

using namespace std;

int main () {

    string input, output;
    getline(cin,input);

    int i;
    output = input[0];
    for (i=1; i<(input.length()); i++){
        if (input[i]== '-'){
            output = output + input[i+1];
        }
    }
    cout << output;
    return 0;
}