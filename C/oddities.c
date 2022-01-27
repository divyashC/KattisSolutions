// Oddities
/* https://open.kattis.com/problems/oddities */

#include <stdio.h>
void main (){

    int n, i;
    scanf("%d", &n);
    int num[n];

    for (i=0; i<n; i++){
        scanf("%d", &num[i]);
    }

    for (i=0; i<n; i++){
        if (num[i]%2 == 0){
            printf("%d is even", num[i]);
        }

        else {
            printf("%d is odd", num[i]);
        }
        printf("\n");

    }

}