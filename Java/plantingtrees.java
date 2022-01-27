// https://open.kattis.com/problems/plantingtrees

import java.util.Scanner;
import java.util.Arrays;

class Kattis {

	public static void main(String[] args) {
	
		Scanner sc = new Scanner(System.in);
		
		int i, n, max=0;
		n = sc.nextInt();
		int[] arr = new int[n];
		
		for (i=0; i<n; i++){
			arr[i] = sc.nextInt();
		}	
		
		Arrays.sort(arr);
		
		for (i=n-1; i>=0; i--){
			
			arr[i] = arr[i] + 1 + (n-i);
			
			if (arr[i]>max){
				max = arr[i];
			}
			
		}	
		
		
		
		System.out.println(max);
		
	}
}