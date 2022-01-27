//https://open.kattis.com/problems/detaileddifferences

import java.util.Scanner;

class Kattis {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		int i, j, n; 
		String str1, str2;
		
		n = sc.nextInt();

		for (j=0; j<n; j++){
			
			str1 = sc.next();
			str2 = sc.next();
			
			System.out.println(str1);
			System.out.println(str2);
			
			for (i = 0; i < str1.length(); i++) {
				
				if (str1.charAt(i) == str2.charAt(i)){
					System.out.print(".");
				}
				
				else{
					System.out.print("*");
				}
				
			}
			
			System.out.println();
			
		}
		
		sc.close();
	}
}