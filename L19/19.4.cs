/*Дан массив размера N. После каждого отрицательного элемента массива вставить элемент с нулевым значением.*/
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

            for(int i=0; i < n; i++)
            {
                arr[i] = r.Next(-50,100);
            }

            var newlist = arr.ToList();

            for (int i = 0; i < newlist.Count; i++)
            {
                if (newlist[i] < 0)
                {
                    newlist.Insert(i+1, 0);
                }
            }

            arr = newlist.ToArray();

            foreach(int i in arr)
            {
                Console.Write($"{i} ");
            }

        }
    }
}
