// Quadrant Selection
/* https://open.kattis.com/problems/quadrant */

#include <stdio.h>
void main() {

    int corA, corB;

    scanf("%d", &corA);
    scanf("%d", &corB);

    if (corA>0 && corB>0){
        printf("1");
    }

    else if (corA<0 && corB>0){
        printf("2");
    }

    else if (corA<0 && corB<0){
        printf("3");
    }

    else {
        printf("4");
    }

}