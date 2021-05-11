/* https://open.kattis.com/problems/ofugsnuid */

#include <stdio.h>
void main () {

    int n, i;
    scanf ("%d", &n);

    int d[n];

    for (i=0; i<n; i++){
        scanf ("%d", &d[i]);
    }
    
    for (i=n-1; i>=0; i--){
        printf ("%d\n", d[i]);
    }
    
}