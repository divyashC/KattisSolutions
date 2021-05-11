/* https://open.kattis.com/problems/numberfun */

#include <stdio.h>
void main () {

    int n, i;

    scanf("%d", &n);

    float a[n], b[n], c[n];

    for (i=0; i<n; i++){

        scanf("%f %f %f", &a[i], &b[i], &c[i]);

    }

    for (i=0; i<n; i++){

        if (a[i]+b[i]==c[i]){
            printf("Possible");  
        }

        else if (a[i]-b[i]==c[i] || b[i]-a[i]==c[i]){
            printf("Possible"); 
        }

        else if (a[i]*b[i]==c[i]){
            printf("Possible");
        }

        else if (a[i]/b[i]==c[i] || b[i]/a[i]==c[i]){
            printf("Possible");
        }

        else {
            printf("Impossible");
        }

        printf("\n");

    }

}