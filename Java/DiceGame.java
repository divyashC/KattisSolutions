// https://open.kattis.com/problems/dicegame

import java.util.Scanner;

class Kattis {
	
	public static void main (String[] args){
		
		Scanner sc = new Scanner(System.in);
		
		int a , b , c, d, e, f, g, h, gu, em;
		a = sc.nextInt();
		b = sc.nextInt();
		c = sc.nextInt();
		d = sc.nextInt();
		gu = a+b+c+d;
		
		e = sc.nextInt();
		f = sc.nextInt();
		g = sc.nextInt();
		h = sc.nextInt();
		em = e+f+g+h;
		
		if (gu>em){
			System.out.println("Gunnar");
		}
		
		else if (gu<em){
			System.out.println("Emma");
		}
		
		else {
			System.out.println("Tie");
		}
		
	}
	
}