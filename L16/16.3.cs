/*Даны целые числа N (> 2), A и B. Сформировать и вывести целочисленный массив размера N, первый элемент которого равен A, 
  второй равен B, а каждый последующий элемент равен сумме всех предыдущих*/
using System;

namespace main
{
    class Program
    {
       
        static void Main(string[] args)
        {
            
            int N = Convert.ToInt32(Console.ReadLine());
            int[] arr = new int[N];
            int A = Convert.ToInt32(Console.ReadLine());
            int B = Convert.ToInt32(Console.ReadLine());
            arr[0] = A;
            arr[1] = B;

            for (int i = 2; i < N; i++)
            {
                arr[i] = arr[i - 1] + arr[i - 2];
            }

            for(int j = 0; j < N; j++)
            {
                Console.Write(arr[j] + " ");
            }
        }
    }
}
