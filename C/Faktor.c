/* https://open.kattis.com/problems/faktor */

#include <stdio.h>
void main(){

    int noA, imP, noC, i, bribe;
    scanf("%d %d", &noA, &imP);

    noC = (noA * (imP - 1)) + 1;

    printf("%d", noC);
            
}