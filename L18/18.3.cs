/*Дан целочисленный массив размера N. Увеличить все нечетные числа, содержащиеся в массиве, на 
  исходное значение последнего нечетного числа. Если нечетные числа в массиве отсутствуют, то оставить массив без изменений*/
using System;

namespace main
{
    class Program
    {
        static void Output(int[] N)
        {
            foreach (int i in N)
                {
                    Console.Write($"{i} ");
                }
        }

        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());
            int[] A = new int[N];
            int index = 0;
            var r = new Random();

            for (int i = 0; i < N; i++)
            {
                A[i] = r.Next(100);
            }

            Output(A);

            for (int i = 0; i < N; i++)
            {
                if (A[i] % 2 != 0)
                {
                    index = i;
                }
            }
            Console.WriteLine();

            for (int j = 0; j < N; j++)
            {
                if (A[j] % 2 != 0)
                {
                    A[j] += A[index];
                }
            }

            Output(A);
        }
    }
}