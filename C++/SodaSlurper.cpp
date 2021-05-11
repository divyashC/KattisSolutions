// https://open.kattis.com/problems/sodaslurper

#include <iostream>

using namespace std;

int main() {
    int a, b, cost, drank, left;
    cin >> a >> b >> cost;

    int starting = a + b;
    int total = 0;

    while(starting >= cost) {
        drank = starting / cost;
        left = starting % cost;
        total += drank;
        starting = left + drank;
    }

    cout << total << endl;
}
