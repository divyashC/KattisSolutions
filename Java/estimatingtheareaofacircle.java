// https://open.kattis.com/problems/estimatingtheareaofacircle

import java.util.Scanner;

class Kattis {
    public static void main(String[] args) {
		
        Scanner sc = new Scanner(System.in);
		
        double r = sc.nextDouble();
        double m = sc.nextInt();
        double c = sc.nextInt();
		
        while(r != 0){
            System.out.println(Math.PI * r * r + " " + (2 * r * (2 * r) * (c / m)));
            r = sc.nextDouble();
            m = sc.nextInt();
            c = sc.nextInt();
        }
    }
}