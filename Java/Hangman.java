// https://open.kattis.com/problems/hangman

import java.util.Scanner;

class Kattis {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		int i, j, mistakes=0, count;
		String str1, str2;
		
		boolean win = true;
		
		str1 = sc.next();
		str2 = sc.next();
		
		sc.close();
		
		for (i=0; i<str1.length(); i++){
			
			count = 0;
			
			for (j=0; j<str2.length(); j++) {
				
				if (str1.charAt(i) != str2.charAt(j)){
					count++;
				}
				
			}
			
			if (count == 0) {
				mistakes++;
			}
			
			if (mistakes >= 10) {
				win = false;
				break;
			}
				
		}
		
		if (win){
			System.out.println("WIN");
		}
		
		else {
			System.out.println("LOSE");
		}
		
	}
}