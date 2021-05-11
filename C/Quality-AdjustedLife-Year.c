/* https://open.kattis.com/problems/qaly */

#include <stdio.h>
void main(){

    int n, i;
    float q, y, qaly=0;
    scanf("%d", &n);

    for (i=0; i<n; i++){
        scanf("%f %f", &q, &y);
        qaly = qaly + (q*y);
    }

    printf("%.3f", qaly);
            
}