// https://open.kattis.com/problems/bits

import java.util.Scanner;

class Kattis {
	
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		int z, i, max, current, cases = scan.nextInt();

		for (z = 0; z < cases; z++){
			
			String num = scan.next();
			max = 0;
			
			for (i = 1; i <= num.length(); i++){
				
				current = Integer.bitCount(Integer.parseInt(num.substring(0 , i)));
				
				if (current > max){
					max = current;
				}
			}	
			System.out.println(max);
			
		}
    }
}