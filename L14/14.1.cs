/*Даны целые положительные числа A и B (A < B). Вывести все целые числа от A до B включительно; при этом каждое число 
  должно выводиться столько раз, каково его значение (например, число 3 выводится 3 раза). */
using System;

namespace main
{
    class Program
    {
        static void Main(string[] args)
        {
            int A = Convert.ToInt32(Console.ReadLine());
            int B = Convert.ToInt32(Console.ReadLine());

            for(A=A; A <= B; A++)
            {
                for(int b = 0; b < A; b++)
                {
                    Console.Write(A+ " ");
                    
                }
            }         
        }
    }
}
