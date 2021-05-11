//https://open.kattis.com/problems/herman

import java.util.Scanner;

public class Kattis {
	public static void main(String[] args) {
	
		Scanner sc = new Scanner(System.in);

		int input = sc.nextInt();

		System.out.printf("%.6f" , input * input * Math.PI);
		System.out.println();
		System.out.printf("%.6f" , input * input * 2.0);
		System.out.println();

		sc.close();
	}
}