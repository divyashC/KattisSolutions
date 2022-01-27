// Nasty Hacks

/* https://open.kattis.com/problems/nastyhacks */

#include <stdio.h>
void main (){

    int n,i;
    scanf("%d", &n);
    int profit[n], r[n], e[n], c[n];

    for (i=0; i<n; i++){
        scanf("%d %d %d", &r[i], &e[i], &c[i]);
    }

    for (i=0; i<n; i++){

        profit[i] = e[i]-c[i];

        if (profit[i] > r[i]){
            printf("advertise\n");
        }

        else if (profit[i]==r[i]){
            printf("does not matter\n");
        }

        else {
            printf("do not advertise\n");
        }
    }

}