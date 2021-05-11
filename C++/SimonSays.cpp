// https://open.kattis.com/problems/simonsays

#include <iostream>
#include <string>

using namespace std;

int main () {

    string namce;
    int i, cases;
    cin >> cases;
    getline(cin,namce);

    for  (i=0; i<cases; i++){

        getline(cin,namce);

        if (namce.substr(0,10).compare("Simon says") == 0){
            cout <<  namce.substr(11) << endl;
        }
    }

    return 0;

}
