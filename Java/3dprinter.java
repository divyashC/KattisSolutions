// https://open.kattis.com/problems/3dprinter

import java.util.Scanner;

class Kattis {

	public static void main(String[] args) {
  
		Scanner sc = new Scanner(System.in);
		
		int statues = sc.nextInt();
		double div = Math.log(statues) / Math.log(2);
		System.out.println(1 + (int)Math.ceil(div));
		
	}
}