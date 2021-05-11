/* https://open.kattis.com/problems/heartrate */

#include <stdio.h>
void main (){

    int n,b,i;
    float p;
    scanf("%d", &n);
    float abms[n], beats[n];

    for (i=0; i<n; i++){
        scanf("%d %f", &b, &p);
        beats[i] = (60*b)/p;
        abms[i] = 60/p;
    }

    for (i=0; i<n; i++){
        printf("%.4f %.4f %.4f\n", beats[i]-abms[i], beats[i], beats[i]+abms[i]);
    }

}