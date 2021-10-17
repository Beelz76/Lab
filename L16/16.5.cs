/*Дан массив A размера N. Вывести вначале его элементы с нечетными номерами в порядке возрастания номеров, 
  а затем — элементы с четными номерами в порядке убывания номеров*/
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

            for(int m = 0; m < N; m++)
            {
                arr[m] = m+1;
            }


            for (i = 1; i < N; i += 2)1
            {
                Console.Write(arr[i]+ " ");
            }

            for (j = N-1; j >=0 ; j-=1)
            {
                if (j % 2 == 0)
                {
                    Console.Write(arr[j] + " ");
                }
            }

        } 
    }
}
