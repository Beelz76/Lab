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

            var newlist = arr.ToList();

            for (int i = 0; i < newlist.Count; i++)
            {
                int k = 0;

                for (j = 0; j < newlist.Count; j++)
                {
                    if(newlist[i]==newlist[j])
                    {
                        k++;
                        a = i;
                        b = j;
                    }
                }

                 if (k == 2)
                {
                    newlist.RemoveAt(a);
                    newlist.RemoveAt(b-1);
                    i--;
                }

            }

            arr = newlist.ToArray();

            foreach (int g in arr)
            {
                Console.Write($"{g} ");
            }

            

        }
    }
}
