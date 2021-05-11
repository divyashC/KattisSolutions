/* https://open.kattis.com/problems/parking2 */

#include <stdio.h>

void main() {

    int noT, i, j, n;
    scanf("%d", &noT);
     int first[noT], last[noT];

    for (i=0; i<noT; i++){
        
        scanf("%d", &n);

        int matrix[n];
        
        for (j=0; j<n; j++){
            scanf ("%d", &matrix[j]);
        }

        first[i] = matrix[0];
        last[i] = matrix[0];

        for (j=0; j<n; j++){

            if (matrix[j] < first[i]){
                first[i] = matrix[j];
            }

            if (matrix[j] > last[i]){
                last[i] = matrix[j];
            }

        }

    }

    for (i=0; i<noT; i++){
        printf("%d\n", (last[i] - first[i])*2);
    }

}