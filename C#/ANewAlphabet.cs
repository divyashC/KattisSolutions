// https://open.kattis.com/problems/anewalphabet

using System;

namespace aNewAlphabet
{
    class Kattis
    {
        static void Main(string[] args)
        {
            int i;

            string line = Console.ReadLine();
            string input = line.ToLower();

            string[] arr = new string[26] {"@", "8", "(", "|)", "3", "#", "6", "[-]", "|", "_|", "|<", "1", "[]\\/[]", "[]\\[]",  "0", "|D", "(,)", "|Z", "$", "\'][\'", "|_|", "\\/", "\\/\\/", "}{", "`/", "2"};

            for (i=0; i<input.Length; i++) {

                int character = input[i];

                if (character >= 'a' && character <= 'z') {
                    Console.Write(arr[character-'a']);
                }
                    
                else {
                    Console.Write(input[i]);
                }

            }
            
        }
    }
}
