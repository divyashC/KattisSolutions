// https://open.kattis.com/problems/everywhere

import java.util.Scanner;
import java.util.HashSet;

class Kattis {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        
        int T, i, n, j;
        
        T = sc.nextInt();
        
        for (i=0; i<T; i++) {
            
            HashSet<String> set = new HashSet<>();
            
            n = sc.nextInt();
            sc.nextLine();
            for(j=0; j<n; j++) {
                set.add(sc.nextLine()); 
            }
            
            System.out.println(set.size());
        }       
        
        sc.close();

        
    }
}