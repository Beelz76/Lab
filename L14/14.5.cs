/*Даны целые положительные числа A и B. Найти их наибольший общий делитель (НОД), используя алгоритм Евклида*/
using System;

namespace main
{
    class Program
    {
        static int NOD(int a, int b)
        {
            while(a!=0 && b != 0)
            {
                if (a > b)
                {
                    a %= b;
                }
                else
                {
                    b %= a;
                }               
            }
            return a + b;
        }

        static void Main(string[] args)
        {
            int A = Convert.ToInt32(Console.ReadLine());
            int B = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine(NOD(A, B));

        }
    }
}
