/*Дано целое число N (> 1), являющееся числом Фибоначчи: N = FK. Найти целое число K — порядковый номер числа Фибоначчи N.*/
using System;

namespace main
{
    class Program
    {
        
        static int Fib(int N)
        {
            int k=2, a = 0, b = 1, c = 0;
            while (c != N)
            {
                c = a + b;
                a = b;
                b = c;
                k++;
            }           
            return k;
        }
        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());
            
            Console.WriteLine("Порядковый номер числа - " + Fib(N));
        }
    }
}
