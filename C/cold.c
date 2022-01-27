/* Cold-puter Science */
/* https://open.kattis.com/problems/cold */

#include <stdio.h>
void main(){
    int i, a, days=0;
    scanf("%d", &a);
    int temp[a];
    for (i=0; i<a; i++ ){
        scanf("\n%d", &temp[i]);
    }
    for (i=0; i<a; i++){  
       if (temp[i] < 0){
           days++;
       }
    }
    printf("%d", days);
}