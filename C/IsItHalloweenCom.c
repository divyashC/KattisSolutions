/* https://open.kattis.com/problems/isithalloween */

#include <stdio.h>
#include <string.h>
void main() {

    int date;
    char month[4];
    char decs[4] = {'D','E','C'};
    char octs[4] = {'O','C','T'};
    scanf("%s %d", month, &date);

    int oct = strcmp (month, octs);
    int dec = strcmp (month, decs);
    
    if (dec == 0){
        if (date==25){
            printf("yup");
        }
        else {
            printf("nope");
        }
    }

    else if (oct == 0){
        if (date==31){
            printf("yup");
        }
        else {
            printf("nope");
        }
    }

    else {
        printf("nope");
    }

}