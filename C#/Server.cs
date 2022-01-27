// Server
// https://open.kattis.com/problems/server

using System;

public class Kattis {

    public static void Main(string[] args) {

        int t, total=0, count=0;

        string[] input = Console.ReadLine().Split (' ');
        t = int.Parse (input[1]);

        foreach (string s in Console.ReadLine().Split (' ')) {

            total += int.Parse(s);

            if (total>t) {
                break;
            }
            count++;

        }
        Console.WriteLine(count);
            
    }
}