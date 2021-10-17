/*Дано целое число N (> 0). Сформировать и вывести целочисленный массив размера N, содержащий N первых \
  положительных нечетных чисел: 1, 3, 5, . . . .*/
using System;

namespace main
{
    class Program
    {
       
        static void Main(string[] args)
        {
            int i, j;
            int N = Convert.ToInt32(Console.ReadLine());
            int[] arr = new int[N];

            for( i = 0, j=1; i < N; i++,j+=2)
            {
                arr[i] = j;                
            }

            for (i = 0; i < N; i++)
            {
                Console.Write(arr[i] + " ");
            }
        }
    }
}
