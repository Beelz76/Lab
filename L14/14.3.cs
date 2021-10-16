/*Дано целое число N (> 1). Вывести наименьшее из целых чисел K, для которых сумма 1 + 2 + . . . + K будет больше или 
  равна N, и саму эту сумму.*/
using System;

namespace main
{
    class Program
    {
        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());
            int sum = 0, a;
            for (a = 0; sum < N; ) 
            {
                a++;
                sum += a;
            }

            Console.WriteLine(a + "\n" + sum);
        }
    }
}
