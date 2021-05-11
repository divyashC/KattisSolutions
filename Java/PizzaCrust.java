// https://open.kattis.com/problems/pizza2

import java.util.Scanner;
import java.lang.Math;

class Kattis {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		double r, c, A, B, ans;
		
		r = sc.nextDouble();
		c = sc.nextDouble();
		
		A = (Math.PI)*r*r;
		B = (Math.PI)*c*c;
		ans = (A-B)/A;
		
		System.out.println(100-(ans*100));
		
	}

}