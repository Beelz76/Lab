/*Дан массив A размера N. Вывести его элементы в следующем порядке: A1, AN , A2, AN−1, A3, AN−2,*/
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
            for(i = 0; i < N; i++)
            {
                arr[i] = i+1;
            }
            
            for (i = 0, j = N-1; i<N/2; i++, j -= 1)
            {
                  Console.Write(arr[i] + " " + arr[j] + " ");
            
            }
            if (N % 2 != 0)
            {
                Console.Write(arr[N / 2 ] + " ");
            }
        } 
    }
}
