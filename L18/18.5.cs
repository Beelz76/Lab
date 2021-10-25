/*Дан массив размера N, все элементы которого, кроме первого, упорядочены по возрастанию. 
  Сделать массив упорядоченным, переместив первый элемент на новую позицию.*/
using System;

namespace main
{
    class Program
    {

        static void Main(string[] args)
        {
            int N = Int32.Parse(Console.ReadLine());
            int[] A = new int[N];
            var r = new Random();
            int temp, index = 0, i, j, x; 

            for (int g = 0; g < N; g++)
            {
                A[g] = r.Next(0, 100);
            }

            for (i = 2; i < N; i++)
            {
                for (j = i, x = A[i]; j > 1 && x < A[j - 1]; j--)
                {
                    A[j] = A[j - 1];
                }
                A[j] = x;
            }

            foreach (int g in A)
            {
                Console.Write($"{g}\t");
            }


            for (int g = 1; g < N; g++)
            {
                if (A[g] < A[0])
                {
                    index = g;
                }
            }

            for (int g = 1; g <= index; g++)
            {
                temp = A[g - 1];
                A[g - 1] = A[g];
                A[g] = temp;
            }


            Console.WriteLine();
            foreach (int g in A)
            {
                Console.Write($"{g}\t");
            }
        }
    }
}