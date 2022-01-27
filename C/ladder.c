// Ladder
/* https://open.kattis.com/problems/ladder */

#include <stdio.h>
#include <math.h>

void main() {

    int h, v;
    int ladder;
    scanf("%d %d", &h, &v);

    ladder = h / sin(v*(M_PI/180));

    printf("%d", ladder+1);

}