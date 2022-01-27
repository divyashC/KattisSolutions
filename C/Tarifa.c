/* https://open.kattis.com/problems/tarifa */

#include <stdio.h> 
void main () {

    int x, n, i, total=0, m;
    scanf("%d %d", &x, &n);
    
    for (i=0; i<n; i++){
        scanf("%d", &m);
        total += m;
    }
    
    printf("%d", (x*(n+1))-total);

}