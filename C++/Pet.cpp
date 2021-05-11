//

#include <iostream>

using namespace std;

int main () {

    int i, j, total[5], x;

    for (i=0; i<5; i++){
        total[i]=0;
        for (j=0; j<4; j++){
           cin >> x;
           total[i]+=x;
        }
    }

    int high = total[0], slno=0;

    for (i=1; i<5; i++){
        if (total[i]>high){
            high = total[i];
            slno=i;
        }
    }

    cout << (slno+1) << " " << high;

    return 0;

}
