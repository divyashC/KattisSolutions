// https://open.kattis.com/problems/luhnchecksum

import java.util.Scanner;

class Kattis {
	
	public static void main (String[] args){
		
		Scanner sc = new Scanner(System.in);
		int n=sc.nextInt(), loop;
		
		for (loop=0; loop<n; loop++) {
			
			String input = sc.next();
	
			int i, sum=0, prod, size, j;
			int[] num = new int[input.length()];
			size = input.length();
			j=1;
			for (i=(size-1); i>=0; i--) {
		
				char ch = input.charAt(i);
				num[i] = Character.getNumericValue(ch);
				
				if (j%2==0) {
					prod = 2*num[i];
					if (prod>9) {
						sum += (prod%10) + (prod/10);
					}
					else {
						sum += prod;
					}
				}
				
				else {
					sum+=num[i];
				}
				j++;
			}
			
			if (sum%10==0) {
				System.out.println("PASS");
			}
			else {
				System.out.println("FAIL");
			}
				
		}
		
		sc.close();
		
	}
	
}