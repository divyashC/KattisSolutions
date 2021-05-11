/* https://open.kattis.com/problems/pieceofcake2 */

#include <stdio.h>
#include <math.h>
void main(){

    int i, exp, root, points;
    scanf("%d", &i);
    exp = pow(4,i);
    root = sqrt(exp);
    points = (root + 1) * (root + 1);
    printf("%d", points);
            
}