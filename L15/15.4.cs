/*Описать функцию Quarter(x, y) целого типа, определяющую номер координатной четверти, в которой находится точка с ненулевыми 
  вещественными координатами (x, y). С помощью этой функции найти номера координатных четвертей для трех точек с данными ненулевыми координатами*/
using System;

namespace main
{
    class Program
    {
       static int Quarter(double x, double y)
        {
            if (x>0 && y > 0)
            {
                return 1;
            }
            else if (x < 0 && y > 0)
            {
                return 2;
            }
            else if (x < 0 && y < 0)
            {
                return 3;
            }
            else 
            { 
                return 4;
            }
        }
           
        static void Main(string[] args)
        {
            for (int i=0; i < 3; i++)
            {
                double A = Convert.ToDouble(Console.ReadLine());
                double B = Convert.ToDouble(Console.ReadLine());
                Console.WriteLine("Точка лежит в " + Quarter(A, B) + " четверти");

            }
        }
    }
}
