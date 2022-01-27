// Filip
/* https://open.kattis.com/problems/filip */

#include <stdio.h>
void main (){

    int num1, num2, i, rNum1=0, rNum2=0, remainder;
    scanf("%d %d", &num1, &num2);

    while (num1 != 0) {
        remainder = num1 % 10;
        rNum1 = rNum1 * 10 + remainder;
        num1 = num1/10;
    }
    
    while (num2 != 0) {
        remainder = num2 % 10;
        rNum2 = rNum2 * 10 + remainder;
        num2 = num2/10;
    }

    if (rNum1>rNum2){
        printf("%d", rNum1);
    }

    else {
        printf("%d", rNum2);
    }

}