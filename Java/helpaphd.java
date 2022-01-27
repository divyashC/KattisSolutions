// https://open.kattis.com/problems/helpaphd

import java.util.Scanner;

class Kattis {
	
    public static void main(String[] args) {
		
        Scanner sc = new Scanner(System.in);
		
        int n, i, a, b;
		String s;
		
		n = Integer.parseInt(sc.nextLine());
        for(i = 0; i<n; i++){
			
            s = sc.nextLine();
			
            if(s.equals("P=NP")){
                System.out.println("skipped");
			}
			
            else{
				a = Integer.parseInt(s.split("\\+")[0]);
				b = Integer.parseInt(s.split("\\+")[1]);
                System.out.println(a+b);
			}
        }
		
    }
}