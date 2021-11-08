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

            for(int i=0; i < n; i++)
            {
                arr[i] = r.Next(1,100);
            }

            var newlist = arr.ToList();

            for (int i = 0; i < newlist.Count; i++)
            {
                if (newlist[i] > max)
                {
                    max = newlist[i];
                }

                if (newlist[i] < min)
                {
                    min = newlist[i];
                }
            }
     
            newlist.Insert(newlist.IndexOf(min), 0);
            newlist.Insert(newlist.IndexOf(max) + 1, 0);

            arr = newlist.ToArray();

            foreach(int i in arr)
            {
                Console.Write($"{i} ");
            }

        }
    }
}
