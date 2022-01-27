// Modulo
/* https://open.kattis.com/problems/modulo */

#include <stdio.h>
void main (){

    int n, i, j, count=0, flag, r[10];

    for (i=0; i<10; i++){
        scanf("%d", &n); 
        r[i] = n%42;

    }

    for (i=0; i<10; i++){
        flag = 0;
        for (j=i+1; j<10; j++){
            if (r[i] == r[j]){
                flag++;
            }
        }

        if (flag == 0){
            count++;
        }

    }

    printf("%d", count);

}