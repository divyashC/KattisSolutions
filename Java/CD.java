// https://open.kattis.com/problems/cd

import java.util.Arrays;
import java.util.Scanner;

public class Kattis {
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);

		while (true) {
			int n = scan.nextInt();
			int m = scan.nextInt();

			if (n == 0 && m == 0)
				break;

			int[] cds = new int[n];

			int count = 0;

			for (int i = 0; i < n; i++)
				cds[i] = scan.nextInt();

			for (int i = 0; i < m; i++)
				if (Arrays.binarySearch(cds, scan.nextInt()) >= 0)
					count++;

			System.out.println(count);
		}

		scan.close();
	}
}