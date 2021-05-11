// https://open.kattis.com/problems/kemija08

#include <iostream>

using namespace std;

int main () {

    int i;
    string input;

    getline(cin, input);

    cout << input[0] << input[1];
    for (i=2;  i<(input.length()); i++){
        if (input[i]=='p'){
            if (input[i+1]=='a' || input[i+1]=='e' || input[i+1]=='i' || input[i+1]=='o' || input[i+1]=='u'){
                i=i+2;
            }
        }
        cout << input[i];
    }

    return 0;

}