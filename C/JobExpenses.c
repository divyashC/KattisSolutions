// Job Expenses
/* https://open.kattis.com/problems/jobexpenses */

#include <stdio.h>
void main() {

    int n, i, paid=0;
    scanf("%d", &n);

    int matrix[n];

    for (i=0; i<n; i++){
        scanf("%d", &matrix[i]);

        if (matrix[i] < 0){
            paid = paid - (matrix[i]);
        }
    }

    printf("%d", paid);

}