/*Дан массив A размера N. Найти минимальный элемент из его элементов с четными номерами: A2, A4, A6,*/
using System;

namespace main
{
    class Program
    {

        static void Main(string[] args)
        {
            int N =Int32.Parse(Console.ReadLine());
            int[] mas = new int[N];
            int index = 0, min = 99999999;

            var r = new Random();
            for (int i = 0; i < N; i++)
            {
                mas[i] = r.Next(-10,100) ;
                
            }

            for(int i = 0; i < N; i++)
            {
                Console.Write(mas[i] + "[{0}]\t", i);
            }

            for (int j = 2; j < N; j += 2)
            {
                if (mas[j] < min)
                {
                    min = mas[j];
                    index = j;
                }
            }

            Console.WriteLine("\n" + "Минимальный элемент массива = " + min + "[{0}]", index);
        }
    }
}

