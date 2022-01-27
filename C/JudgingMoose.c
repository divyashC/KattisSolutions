// Judging Moose
/* https://open.kattis.com/problems/judgingmoose */

#include <stdio.h>
void main() {

    int l, r, points;
    scanf("%d %d", &l, &r);
    points = l>r?2*l:2*r;

    if (l!=r) {
        printf("Odd %d",points);
    }

    else if (l != 0){
        printf("Even %d", points);
    }

    else {
        printf("Not a moose");
    }

}