/*Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца, заключенного между двумя окружностями с 
  общим центром и радиусами R1 и R2 (R1 и R2 — вещественные, R1 > R2). С ее помощью найти площади трех колец, для которых 
  даны внешние и внутренние радиусы.*/
using System;

namespace main
{
    class Program
    {
       static double RingS(double R1, double R2)
        {
            double S1 = 3.14 * R1 * R1;
            double S2 = 3.14 * R2 * R2;
            return S1 - S2;
        }
           
        static void Main(string[] args)
        {
            for (int i = 0; i < 3; i++)
            {
                double A = Convert.ToDouble(Console.Read());
                double B = Convert.ToDouble(Console.ReadLine());
                Console.WriteLine(RingS(A, B));
            }
        }
    }
}
