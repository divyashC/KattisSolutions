/* https://open.kattis.com/problems/licensetolaunch */

#include <stdio.h>
void main () {

    int n, i, j;

    scanf("%d", &n);

    int arr[n];

    for (i=0; i<n; i++){

        scanf("%d", &arr[i]);

    }

    int least = arr[0], day = 0;

       for (i=0; i<n; i++){

        if (arr[i]<least){
            least = arr[i];
            day = i;
        }

    }

    printf("%d", day);

}