// https://open.kattis.com/problems/trik

import java.util.Scanner;

class Kattis {
	
    public static void main(String[] args) {
		
        Scanner sc = new Scanner(System.in);
		
		int x, temp;
        int[] position = { 1, 0, 0 };
		
        String moves = sc.nextLine();
		
        for (x = 0; x < moves.length(); x++) {
			
            if (moves.charAt(x) == 'A') {
                temp = position[1];
                position[1] = position[0];
                position[0] = temp;
            } 
			
			else if (moves.charAt(x) == 'B') {
                temp = position[1];
                position[1] = position[2];
                position[2] = temp;
            } 
			
			else if (moves.charAt(x) == 'C') {
                temp = position[0];
                position[0] = position[2];
                position[2] = temp;
            }
			
        }
		
        System.out.println(position[0] == 1 ? 1 : position[1] == 1 ? 2 : 3);
		
    }
}