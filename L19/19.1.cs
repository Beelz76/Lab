/*Дан целочисленный массив размера N. Удалить из массива все соседние одинаковые элементы, оставив их первые вхождения.*/
using System;
using System.Linq;

namespace main
{
    class Program
    {

        static void Main(string[] args)
        {
            
            int[] arr = {0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 5, 6, 7, 7, 7, 7, 7 };
        
            foreach (int i in arr)
            {
                Console.Write($"{i} ");
            }

            var newlist = arr.ToList();

            for (int i = 0; i < newlist.Count-1; i++)
            {
                if (newlist[i + 1] == newlist[i])
                {
                    newlist.RemoveAt(i+1);
                    i--;
                }
            }

            arr = newlist.ToArray();

            Console.WriteLine();

            foreach(int i in arr)
            {
                Console.Write($"{i} ");
            }

        }
    }
}
