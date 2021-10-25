/*Даны положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B 
 (без наложений). Не используя операции умножения и деления, найти длину незанятой части отрезка A.*/
using System;

namespace main
{
    class Program
    {
        static void Main(string[] args)
        {
            int g=0;
            int A = Convert.ToInt32(Console.ReadLine());
            int B = Convert.ToInt32(Console.ReadLine());

            for (int a = A; a >= B; a -= B)
            {
                g += B;
            }

            Console.WriteLine("Длина незанятой части отрезка A = " + (A - g));
        }
    }
}
