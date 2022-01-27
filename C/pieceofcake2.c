// Piece of Cake!
/* https://open.kattis.com/problems/pieceofcake2 */

#include <stdio.h>
void main(){

    int n, h, v;
    scanf("%d %d %d", &n, &h, &v);
    
    if (n-h > h){
        h = n-h;
    }

    if (n-v > v){
        v = n-v;
    }

    printf("%d", h*v*4);
                
}