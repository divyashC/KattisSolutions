// https://open.kattis.com/problems/alphabetspam

import java.util.*;

public class Kattis {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		String input = sc.nextLine();

		sc.close();

		double whitespace = 0;
		double lowercase = 0;
		double uppercase = 0;
		double symbols = 0;
		int i;

		for(i = 0; i < input.length(); i++){

			char curr = input.charAt(i);

			if(curr == '_') {
				whitespace++;
			}

			else if(curr >= 'A' && curr <= 'Z') {
				uppercase++;
			}

			else if (curr >= 'a' && curr <= 'z') {
				lowercase++;
			}

			else {
				symbols++;
			}
		}
		
		System.out.println(whitespace/input.length());
		System.out.println(lowercase/input.length());
		System.out.println(uppercase/input.length());
		System.out.println(symbols/input.length());
	}
}