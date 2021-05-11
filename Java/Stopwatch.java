//https://open.kattis.com/problems/stopwatch

import java.util.Scanner;

public class Kattis {

	public static void main(String[] args) {
		
		int i, n, sum=0;

		Scanner sc = new Scanner(System.in);
		
		n = sc.nextInt();
		
		int arr[] = new int[n];
		
		for (i=0; i<n; i++) {
			
			arr[i] = sc.nextInt();
			
		}
		sc.close();
		
		if (n%2 != 0) {
			System.out.println("still running");
		}
		
		else {
			
			for (i=0; i<n; i++) {
				
				sum += (arr[i+1] - arr[i]);
				i++;
				
			}
			
			System.out.println(sum);
			
		}
		

	}

}