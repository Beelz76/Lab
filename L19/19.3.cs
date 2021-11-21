/*Дан массив размера N. Вставить элемент с нулевым значением перед минимальным и после максимального элемента массива.*/
using System;
using System.Linq;

namespace main
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = Int32.Parse(Console.ReadLine());
            int[] arr = new int[n];
            var r = new Random();
            int min = int.MaxValue, max = 0;

            for (int i=0; i < n; i++)
            {
                arr[i] = r.Next(1,100);
            }

            var newList = arr.ToList();

            for (int i = 0; i < newList.Count; i++)
            {
                if (newList[i] > max)
                {
                    max = newList[i];
                }

                if (newList[i] < min)
                {
                    min = newList[i];
                }
            }
     
            newList.Insert(newList.IndexOf(min), 0);
            newList.Insert(newList.IndexOf(max) + 1, 0);

            arr = newList.ToArray();

            foreach (int i in arr)
            {
                Console.Write($"{i} ");
            }
        }
    }
}
