// https://open.kattis.com/problems/bela

import java.util.*;

public class Kattis {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int i, sets, total = 0;

		String[] firstLine = sc.nextLine().split(" ");

		sets = 4 * Integer.parseInt(firstLine[0]);

		String dominant = firstLine[1];


		for(i = 0; i < sets; i++){

			String[] line = sc.nextLine().split("");

			switch(line[0]){

			case "A": 
				total+= 11; 
				break;
			case "K": 
				total+= 4; 
				break;
			case "Q": 
				total+= 3; 
				break;
			case "J": 
				total+= 2; 
				break;
			case "T": 
				total+= 10;

			}

			if(line[1].equals(dominant)){

				switch(line[0]){
				case "J": 
					total+= 18; 
					break;
				case "9": 
					total+= 14;
				}
			}
		}
		sc.close();
		System.out.println(total);
	}
}
