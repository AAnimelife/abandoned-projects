using System;
namespace ConsoleApp1
{
    class Program
    {
        static public int Year(int k)
        {
            return k / 1000000;
        }
        static void Main(string[] args)
        {
            string[] array = Console.ReadLine().Split();
            int a = Convert.ToInt32(array[0]);
            
            Console.WriteLine(Year(a));
        }
    }
}
