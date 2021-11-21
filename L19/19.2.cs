/*Дан целочисленный массив размера N. Удалить из массива все элементы, встречающиеся ровно два раза, 
  и вывести размер полученного массива и его содержимое.*/
using System;
using System.Linq;

namespace main
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = { 1, 2, 3, 1, 2, 2, 5, 6, 5, 10 };
            int a = 0, b = 0, j;

            var newList = arr.ToList();

            for (int i = 0; i < newList.Count; i++)
            {
                int k = 0;

                for (j = 0; j < newList.Count; j++)
                {
                    if(newList[i]==newList[j])
                    {
                        k++;
                        a = i;
                        b = j;
                    }
                }

                 if (k == 2)
                {
                    newList.RemoveAt(a);
                    newList.RemoveAt(b-1);
                    i--;
                }

            }

            arr = newList.ToArray();

            foreach (int g in arr)
            {
                Console.Write($"{g} ");
            }         
        }
    }
}
