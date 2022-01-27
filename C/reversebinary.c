// Reversed Binary Number
/* https://open.kattis.com/problems/reversebinary */

#include <stdio.h>
#include <math.h>

void main (){

    int n, i, num[32], newN=0, j=0;
    scanf("%d", &n);
    for (i=0; n>0; i++){
       num[i] = n%2;
       n = n/2;
   }
   i = i-1;
   while (i>=0){
       newN = newN + (num[i] * pow(2,j));
       j++;
       i--;
   }
   printf("%d ", newN);
}