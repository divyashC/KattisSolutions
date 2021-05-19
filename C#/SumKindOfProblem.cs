// https://open.kattis.com/problems/sumkindofproblem

using System;

public class Kattis {

    public static void Main(string[] args) {

        int n, i, j, slNo, num, sum;

        n = Convert.ToInt32(Console.ReadLine());

        for (i=0; i<n; i++) {

            sum=0;
            
            string[] input = Console.ReadLine().Split(' ');
            
            slNo = int.Parse(input[0]);

            num = int.Parse(input[1]);

            for (j=1; j<=num; j++) {

                sum += j;

            }

            Console.WriteLine(slNo + " " + sum + " " + ((sum*2)-num) + " " + (sum*2));

        }

    }

}