/*Дано целое число N (> 1), а также первый член A и знаменатель D геометрической прогрессии. 
  Сформировать и вывести массив размера N, содержащий N первых членов данной прогрессии: A, A·D, A·D2 , A·D3 , . . .*/
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
            int A = Convert.ToInt32(Console.ReadLine());
            int D = Convert.ToInt32(Console.ReadLine());

            for ( i = 0, j=A; i < N; i++,j*=D)
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
