// https://open.kattis.com/problems/apaxianparent

#include <iostream>

using namespace std;

int main () {

    int x;
    string first, last;
    cin >> first >> last;

    x = first.length();

    if (first[x-1]=='x' && first[x-2]=='e'){
        cout << first << last;
    }

    else if (first[x-1]=='e'){
        cout << first << "x" << last;
    }

    else if (first[x-1]=='a' || first[x-1]=='i' || first[x-1]=='o' || first[x-1]=='u'){
        first.erase((x-1));
        cout << first << "ex" << last;
    }

    else {
         cout << first << "ex" << last;
    }

    return 0;

}
