/*Даны массивы A и B одинакового размера N. Поменять местами их содержимое и вывести вначале элементы преобразованного массива A,
  а затем — элементы преобразованного массива B.*/
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
            int N = Int32.Parse(Console.ReadLine());
            int[] arr1 = new int[N];
            int[] arr2 = new int[N];
            var r = new Random();

            for (int i = 0; i < N; i++)
            {
                arr1[i] = r.Next(100);
                arr2[i] = r.Next(100);
            }

            Console.Write("arr1 : ");

            Output(arr1);

            Console.Write("\n" + "arr2 : ");

            Output(arr2);



            for (int i = 0; i < N; i++)
            {
                arr1[i] ^= arr2[i];
                arr2[i] ^= arr1[i];
                arr1[i] ^= arr2[i];

            }

            Console.Write("\n\n" + "arr1 : ");

            Output(arr1);

            Console.Write("\n" + "arr2 : ");

            Output(arr2);
        }
    }
}


