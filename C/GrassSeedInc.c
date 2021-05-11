/* https://open.kattis.com/problems/grassseed */

#include <stdio.h>
void main (){

    float c, w, l, totalA=0, cost;
    int n, i;
    scanf("%f", &c);
    scanf("%d", &n);

    for (i=0; i<n; i++){
        scanf("%f %f", &w, &l);
        totalA = totalA + (w*l);
    }
    cost = c*totalA;
    printf("%.8f", cost);

}