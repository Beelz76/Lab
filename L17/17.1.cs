/*Дан массив размера N и целые числа K и L (1 ≤ K ≤ L ≤ N). Найти среднее арифметическое элементов массива с номерами от K до L включительно.*/
using System;

namespace main
{
    class Program
    {

        static void Main(string[] args)
        {
            double sum=0;
            int N = Convert.ToInt32(Console.ReadLine());
            int[] arr = new int[N];
            int K = Convert.ToInt32(Console.ReadLine());
            int L = Convert.ToInt32(Console.ReadLine());

            for (int i = 0; i < N; i++)
            {
                arr[i] = i+1;
            }

            for(int j = K-1; j < L; j++)
            {
                sum += arr[j];
            }
            Console.WriteLine(sum/(L-K+1));
        } 
    }
}
