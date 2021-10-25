/*Дан массив размера N. Найти номер его последнего локального максимума 
  (локальный максимум — это элемент, который больше любого из своих соседей).*/
using System;

namespace main
{
    class Program
    {

        static void Main(string[] args)
        {
            int N =Int32.Parse(Console.ReadLine());
            int[] mas = new int[N];
            int index_lokmax = 0;

            var r = new Random();
            for (int i = 0; i < N; i++)
            {
                mas[i] = r.Next(-10,100) ;
                
            }

            for (int i = 0; i < N; i++)
            {
                Console.Write(mas[i] + "[{0}]\t", i);
            }

            for (int j=1; j < N-1; j++)
            {
                if(mas[j]>mas[j-1] && mas[j] > mas[j + 1])
                {
                    index_lokmax = j;
                }
            }
            Console.WriteLine("\nИндекс последнего локального максимума = "+index_lokmax);
        }
    }
}

