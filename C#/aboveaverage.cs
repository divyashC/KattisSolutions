// Above Average
// https://open.kattis.com/problems/aboveaverage

using System;

namespace aboveAverage {

    class Kattis {

        static void Main(string[] args) {
            
            int c, n=0, i, j, total = 0, count = 0, index;
            double avg = 0, output = 0;

            c = Convert.ToInt32(Console.ReadLine());

            for (i=0; i<c; i++) {
                
                total = 0;
                avg = 0;
                count = 0;

                string[] input = Console.ReadLine().Split(' ');
                n = Int32.Parse(input[0]);
                int[] arr = new int[n];

                for (j=0; j<n; j++) {
                    
                    index = j+1;
                    arr[j] = int.Parse(input[index]);
                    total += arr[j];
                }

                avg = total/n;

                for (j=0; j<n; j++) {

                    if (arr[j] > avg) {
                        count++;
                    }

                }

                output = (Convert.ToDouble(count)/n) * 100;

                Console.WriteLine("{0:F3}%",output);

            }
            
        }
    }
}
