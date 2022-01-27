// https://open.kattis.com/problems/hissingmicrophone

#include <iostream>

using namespace std;

int main () {

    string input;
    cin >> input;

    int i, num;

    for (i=0; i<input.length(); i++){
        if (input[i]== 's' && input[i]==input[i+1]){
            num=1;
            break;
        }
        else {
            num=2;
        }
    }

    if (num==1){
        cout << "hiss";
    }

    else {
        cout << "no hiss";
    }

    return 0;

}
