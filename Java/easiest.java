// https://open.kattis.com/problems/easiest

import java.util.*;
import java.util.Scanner;

class Kattis {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int r, temp, prod, sum, i, prodsum, msum;

        for (int n=sc.nextInt(); n!=0; n=sc.nextInt()) {

            temp = n;
            sum=0;

            while (temp!=0){
                r = temp%10;
                sum+=r;
                temp/=10;
            }

            for (i=2; i>0; i++){

		msum=0;
		temp=i;
                while (temp!=0){
                    r = temp%10;
                    msum+=r;
                    temp/=10;
                }

                prod = n*i;
                temp=prod;
		prodsum=0;
                while (temp!=0){
                    r = temp%10;
                    prodsum+=r;
                    temp/=10;
                }

                if (prodsum==sum && prodsum==msum){
		    System.out.println(i);
		    break;
                }

            }

        }

    }

}
