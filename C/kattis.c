// #include <stdio.h>
// void main (){
//     //digit product
//     int n, product, first, last;
//     scanf("%d", &n);
    
//     if (n>10){

//         if (n%10==0){     
//              first = n;
//             while (first >= 10){
//                 first = first/10;
//             }
//             printf("%d", first);
//         }

//         else {

//             while (product>=10){

//                 last = n%10;
                
//                 first = n;

//                 while (first >= 10){
//                     first = first/10;
//                 }

//                 product = first*last;
//                 n = product;
                
//             }
//             printf("%d", product);

//         }
        
//     }

// }

// #include <stdio.h>
// void main (){
//      //electricalOutlets
//     int n, i, j=0, k, noS, sum=0;
//     scanf("%d", &n);
//     int maxAP[n];
//     for (i=0; i<n; i++){
//         scanf("%d", &k);
//         while (j<k){
//             scanf("%d", &noS);
//             sum = sum + noS;
//             j++;
//         }
//         maxAP[i] = sum - (k-1);
//     }

//     for (i=0; i<n; i++){
//         printf("%d", maxAP[i]);
//     }

// }

// #include <stdio.h>
// void main (){

//      //mixed fraction

//     int numerator, denominator, wholeNo;

//         /* get numerator and denominator from user */
//         printf("Enter the value for numerator:");
//         scanf("%d", &numerator);
//         printf("Enter the value for denominator:");
//         scanf("%d", &denominator);

//         /* mixed fraction is not possible if num < deno */
//         if (numerator < denominator) {
//                 printf("Mixed fraction impossible!!\n");
//         } else if (numerator % denominator == 0) {
//                 /* numerator divisible by denominator */
//                 wholeNo = numerator / denominator;
//                 printf("Mixed fraction value: %d\n", wholeNo);
//         } else {
//                 /* mixed fraction manipulation */
//                 wholeNo = numerator / denominator;
//                 numerator = numerator % denominator;
//                 printf("Mixed fraction: %d %d/%d\n",
//                         wholeNo, numerator, denominator);
//         }

// }