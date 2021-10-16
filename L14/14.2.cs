/*Даны положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B 
  (без наложений). Не используя операции умножения и деления, найти длину незанятой части отрезка A.*/
using System;

namespace main
{
    class Program
    {
        static void Main(string[] args)
        {
            int A = int.Parse(Console.ReadLine());
            int B = int.Parse(Console.ReadLine());
            int k = 0;
            for(int a=A ; a >= B; a -= B)
            {
                k++;
            }        
            Console.WriteLine("Длина незанятой части отрезка A = " + (A - (B * k)));
        }
    }
}
