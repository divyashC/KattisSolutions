// https://open.kattis.com/problems/soylent

import java.util.Scanner;

class Kattis {
	
	public static void main (String[] args){
		
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int i;
		
		for (i=0; i<n; i++){
			
			System.out.println((int)Math.ceil(sc.nextInt()/400.0));
			
		}
		
	}
	
}