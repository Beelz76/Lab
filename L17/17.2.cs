/*Дан целочисленный массив размера N, не содержащий одинаковых чисел. Проверить, образуют ли его элементы 
  арифметическую прогрессию. Если образуют, то вывести разность прогрессии, если нет — вывести 0*/
using System;

namespace main
{
    class Program
    {

        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());
            int[] mas = new int[N];
            int f = 1;
            for (int i = 0; i < N; i++)
            {
                mas[i] = Convert.ToInt32(Console.ReadLine());
            }

            int d = mas[1] - mas[0];
            for (int j = 2; j < N; j++)
            {
                if (mas[j] - mas[j - 1] != d)
                {
                    f = 0;
                    break;
                }
            }
            if (f == 1)
            {
                Console.WriteLine("Разность прогрессии = " + d);
            }
            else
            {
                Console.WriteLine("0");
            }
        }
    }
}
