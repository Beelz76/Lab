/*Дан массив размера N. Обнулить элементы массива, расположенные между его минимальным и максимальным элементами 
 (не включая минимальный и максимальный элементы).*/
using System;

namespace main
{
    class Program
    {

        static void Main(string[] args)
        {
            int N = Int32.Parse(Console.ReadLine());
            int[] A = new int[N];
            int max = 0, min = 99999999, indexmin = 0, indexmax = 0;
            Random r = new Random();

            for (int i = 0; i < N; i++)
            {
                A[i] = r.Next(100);
            }

            for (int i = 0; i < N; i++)
            {
                Console.Write(A[i] + "[{0}]\t", i);
            }

            for (int i = 0; i < N; i++)
            {
                if (A[i] < min)
                {
                    min = A[i];
                    indexmin = i;
                }

                if (A[i] > max)
                {
                    max = A[i];
                    indexmax = i;
                }
            }

            Console.WriteLine("\nindexmin = " + indexmin + "\nindexmax = " + indexmax);

            if (indexmin < indexmax)
            {
                for (int i = indexmin + 1; i < indexmax; i++)
                {
                    A[i] = 0;
                }
            }
            else
            {
                for (int i = indexmax + 1; i < indexmin; i++)
                {
                    A[i] = 0;
                }

            }

            for (int i = 0; i < N; i++)
            {
                Console.Write(A[i] + "[{0}]\t", i);
            }
        }
    }
}