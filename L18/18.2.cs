/*Дан массив A размера N. Сформировать новый массив B того же размера по следующему правилу: 
  элемент BK равен среднему арифметическому элементов массива A с номерами от 1 до K.*/
using System;

namespace main
{
    class Program
    {

        static void Main(string[] args)
        {
            int N = Int32.Parse(Console.ReadLine());
            int[] A = new int[N];
            double[] B = new double[N];
            B[0] = 0;
            B[1] = 1;

            for (int i = 0; i < N; i++)
            {
                A[i] = i + 1;
            }

            for (int j = 2; j < N; j++)
            {
                double sum = 0;
                for (int k = 1; k <= j; k++)
                {
                    sum += A[k];
                }
                B[j] = sum / j;
            }

            foreach (double i in A)
            {
                Console.Write($"{i}\t");
            }

            Console.WriteLine();

            foreach (double i in B)
            {
                Console.Write($"{i}\t");
            }
        }
    }
}