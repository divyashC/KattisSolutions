// Harshad Numbers
/* https://open.kattis.com/problems/harshadnumbers */

#include <stdio.h>
int hf(int n, int temp);
void main () {

    int n, hn;
    scanf ("%d", &n);
    hn = hf(n, n);
    printf("%d", hn);
    
}

int hf(int n, int temp) {

    int sum = 0, rem = 0;
    while (temp>0){
        rem = temp%10;
        sum = sum + rem;
        temp = temp/10;
    }
    
    if (n%sum == 0){
        return n;
    }
    else{
        n += 1;
        return hf(n, n);
    }

}