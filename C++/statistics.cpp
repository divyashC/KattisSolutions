// https://open.kattis.com/problems/statistics

#include <iostream>

using namespace std;

int main() {

    int n, i=1, min, max, j, temp;

    while(cin >> n) {

        cin >> max;
        min = max;

        for(j=0; j<n-1; j++) {

            cin >> temp;

            if(temp < min) {
                min = temp;
            }

            if(temp > max) {
                max = temp;
            }
        }

        cout << "Case " << i << ": " << min << " " << max << " " << max-min << endl;
        i++;
    }
}