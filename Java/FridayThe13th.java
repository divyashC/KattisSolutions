// https://open.kattis.com/problems/friday

import java.util.Scanner;

public class Friday {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		int testcases = sc.nextInt();

		for (int zaxby = 0; zaxby < testcases; zaxby++) {
			int months = sc.nextInt();
			int[] nums = new int[months];
			int lucky = 0;
			int day = 0;

			for (int i = 0; i < months; i++)
				nums[i] = sc.nextInt();


			for (int i = 0; i < months; i++)
				for (int j = 1; j <= nums[i]; j++) {
					day++;

					if (j == 13 && (day % 7) == 6)
						lucky++;
				}

			System.out.println(lucky);
		}

		sc.close();
	}
}