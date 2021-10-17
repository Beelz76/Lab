/*Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения:
 −1, если X < 0; 0, если X = 0; 1, если X > 0. 
  С помощью этой функции найти значение выражения Sign(A) + Sign(B) для данных вещественных чисел A и B.*/
using System;

namespace main
{
    class Program
    {
        static int Sign(double X)
        {
            if (X < 0)
            {
                return -1;
            }
            else if (X == 0)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
           
        static void Main(string[] args)
        {
            double A = Convert.ToDouble(Console.ReadLine());
            double B = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine(Sign(A) + Sign(B));
        }
    }
}
