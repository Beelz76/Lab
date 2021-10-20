/*Дан целочисленный массив размера N, содержащий ровно два одинаковых элемента. 
  Найти номера одинаковых элементов и вывести эти номера в порядке возрастания*/
using System;

namespace main
{
    class Program
    {

        static void Main(string[] args)
        {
            int[] mas = { 5, 10, 6, 2, 0, -2, -1, 10, 65, 3 };
            


            for (int i = 0; i < mas.Length; i++)
            {
                Console.Write(mas[i] + "[{0}]\t", i);
            }


            for( int i = 0; i < mas.Length-1; i++)
            {
                for (int j=i+1; j < mas.Length; j++)
                {
                    if (mas[i] == mas[j])
                    {
                        Console.WriteLine("\n" + i + " " + j);
                        break;
                    }
                }
            }
        }
    }
}

