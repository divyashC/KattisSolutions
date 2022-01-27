// https://open.kattis.com/problems/humancannonball2

import java.util.Scanner;

class Kattis {

	public static void main(String[] args) {
	
		Scanner sc = new Scanner(System.in);

		int cases = sc.nextInt();

		while (cases-- > 0){
		
			double v0 = sc.nextDouble();
			double theta = sc.nextDouble();
			double x1 = sc.nextDouble();
			double h1 = sc.nextDouble();
			double h2 = sc.nextDouble();
			
			theta = Math.toRadians(theta);
			
			double t = x1 / (v0 * Math.cos(theta));
			double y = v0 * t * Math.sin(theta) - (0.5 * 9.81 * t * t);
			
			if (h1 + 1 <= y && h2 - 1 >= y){
				System.out.println("Safe");
			}
			
			else {
				System.out.println("Not Safe");
			}
			
			
		}

		sc.close();
	}
}