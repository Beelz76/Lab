/*Описать функцию PowerA3(A, B), вычисляющую третью степень числа A и возвращающую ее в переменной B (A — входной, B — выходной параметр;
  оба параметра являются вещественными). С помощью этой функции найти третьи степени пяти данных чисел.*/
using System;

namespace main
{
    class Program
    {
        static void PowerA3(float A, out float B)
        {
            B = A * A * A;
        }
           
        static void Main(string[] args)
        {
            float B;
         
            for (int i=0; i < 5; i++)
            {
                float A = float.Parse(Console.ReadLine());
                PowerA3(A, out B);
                Console.WriteLine(B);
            }
        }
    }
}
