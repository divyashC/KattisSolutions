//https://open.kattis.com/problems/backspace

import java.util.Scanner;
import java.lang.StringBuilder;

class Kattis {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		int i;
		
		String input = sc.nextLine();
		sc.close();
		
		StringBuilder str = new StringBuilder(input);
		
		for (i=0; i<input.length(); i++) {
			
			char ch = input.charAt(i);

			if (ch == '<') {
				str.setCharAt(i, ' ');
				str.setCharAt(i-1, ' ');
			
				if (i < input.length()-1) {
					
					if (input.charAt(i+1) == '<') {
						str.setCharAt(i+1, ' ');
						str.setCharAt(i-2, ' ');
					}
					
				}
				
			}

		}
		
		String output = str.toString();
		
		System.out.print(output.replaceAll(" ", ""));
		

	}

}