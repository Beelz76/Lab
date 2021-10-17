/*Описать функцию Fact2(N) вещественного типа, вычисляющую двойной факториал: 
  N!! = 1·3·5·. . .·N, если N — нечетное; 
  N!! = 2·4·6·. . .·N, если N — четное (N > 0 — параметр целого типа; вещественное возвращаемое значение используется для того, 
  чтобы избежать целочисленного переполнения при больших значениях N).*/
using System;

namespace main
{
    class Program
    {
       static double Fact2(int N)
        {
            int F=1;
            if (N % 2 == 0)
            {
                for (int i = 2; i <= N; i += 2)
                {
                    F *= i;  
                }
            }
            else
            {
                for (int i = 1; i <= N; i += 2)
                {
                    F *= i;
                }
            }
            return F;
        }
           
        static void Main(string[] args)
        {
            int A = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine(Fact2(A));
        }
    }
}
