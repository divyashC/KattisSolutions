// Pot
/* https://open.kattis.com/problems/pot */

#include <stdio.h>
#include <math.h>
void main(){

    int n, i, P, exp, base, exponent, sum=0;
    scanf("%d", &n);

    for (i=0; i<n; i++){
        scanf("%d", &P);
        exponent = P%10;
        base = P/10;
        exp = pow(base,exponent);
        sum = sum + exp;
    }

    printf("%d", sum);
            
}