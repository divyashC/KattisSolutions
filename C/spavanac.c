// Spavanac
/* https://open.kattis.com/problems/spavanac */

#include <stdio.h>
void main (){
    
    int h, m, diff;
    scanf("%d %d", &h, &m);
    diff = m-45;
    if (diff < 0){
        m = 60 + diff;
        if (h == 0){
            h = 24;
        }
         printf("%d %d", h-1, m); 
    }
    else {
        printf("%d %d", h, diff);
    }

}