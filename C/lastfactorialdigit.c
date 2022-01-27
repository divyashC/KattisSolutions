// Last Factorial Digit
/* https://open.kattis.com/problems/lastfactorialdigit */

#include <stdio.h>
void main(){

    int i, j, k, a;

    scanf("%d", &a);
    
    int n[a];
    for (i=0; i<a; i++ ){
        scanf("\n%d", &n[i]);
    }

    for (i=0; i<a; i++){  
       int product=1;
        for (k=1; k<=n[i]; k++){
            product = product*k;
        }
        printf("\n%d ", product%10); 
    }
}