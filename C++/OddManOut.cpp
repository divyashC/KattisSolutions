// https://open.kattis.com/problems/oddmanout

#include <iostream>

using namespace std;

int main() {

    int n, m, i, j, x, y, count;
    cin >> n;

    for (i=0; i<n; i++) {

        cin >> m;
        int arr[m];

        for (j=0; j<m; j++) {
            cin >> arr[j];
        }

        int co = 0;
        for(x=0; x<m; x++) {

            count = 0;

            for(y=0; y<m; y++) {
                if(arr[x]==arr[y]) {
                    count++;
                }
            }

            if(count==1) {
                
                if (co==0) {
                    cout << "Case #" << (i+1) << ": ";
                }
                co++;

                cout << arr[x];
            }
        }

        cout << endl;
        
    }

}