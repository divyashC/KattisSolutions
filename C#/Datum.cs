// https://open.kattis.com/problems/datum

using System;

public class Kattis {

    public static void Main (string[] args) {

        string line;
        int space, day, month, i;

        line = Console.ReadLine();
        space = line.IndexOf(' ');

        day = int.Parse(line.Substring (0, space));
        month = int.Parse(line.Substring (space + 1));

        for (i=1; i<month; i++) {

            switch (i) {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    day += 31;
                    break;

                case 2:
                    day += 28;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    day += 30;
                    break;
            }
        }

        day %= 7;
        Console.WriteLine (day == 0 ? "Wednesday" : day == 1 ? "Thursday" : day == 2 ? "Friday" : day == 3 ? "Saturday" : day == 4 ? "Sunday" : day == 5 ? "Monday" : "Tuesday");
    }
}