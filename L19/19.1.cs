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

            var newList = arr.ToList();

            for (int i = 0; i < newList.Count-1; i++)
            {
                if (newList[i + 1] == newList[i])
                {
                    newList.RemoveAt(i+1);
                    i--;
                }
            }

            arr = newList.ToArray();

            Console.WriteLine();

            foreach (int i in arr)
            {
                Console.Write($"{i} ");
            }
        }
    }
}
