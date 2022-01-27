// https://open.kattis.com/problems/nodup

#include <iostream>
#include <string.h>

using namespace std;

int main () {

    string input;
    int tw=1, i, j, temp=0;

    getline(cin, input);

    for (i=0; i<(input.length()); i++){
        if (input[i]==' '){
            tw++;
        }
    }

    string split[tw];

    for (i=0; i<tw; i++){
        if (input[i]==' '){
            split[i] == input;
            input.erase();
        }
    }

    for (i=0; i<tw; i++){
        for (j=i+1; j<tw; j++){
            if (split[i]==split[j]){
                cout << "yes";
                break;
            }
            else {
                temp++;
            }
        }
    }

    if (temp>0){
        cout << "no";
    }

    return 0;

}
