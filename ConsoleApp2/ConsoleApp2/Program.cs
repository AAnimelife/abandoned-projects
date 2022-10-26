using System;

namespace ConsoleApp2
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] ans = new string[100];
            for (int i = 0; i < 100; i++) ans[i] = "0";
            int a = int.Parse(Console.ReadLine());
            for (int i = 0; i < a; i++)
            {
                string[] s = Console.ReadLine().Split();
                if (s[0] == "add" || s[0] == "change") ans[int.Parse(s[1])] = s[2];
                else if (s[0] == "delete") ans[int.Parse(s[1])] = "0";
                else Console.WriteLine(ans[int.Parse(s[1])]);
            }
            
        }
    }
}
