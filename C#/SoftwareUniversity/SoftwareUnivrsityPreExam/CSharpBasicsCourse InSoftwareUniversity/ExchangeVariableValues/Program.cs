using System;

namespace ExchangeVariableValues
{
    class Program
    {
        static void Main(string[] args)
        {
            int x = 5;
            int y = 10;
            Console.WriteLine("The First Number is: " + x + "\n" + "The Second Number is: " + y);

            int temp = x;
            x = y;
            y = temp;
            Console.WriteLine("The First Number is: " + x + "\n" + "The Second Number is: " + y);
            Console.Read();
        }
    }
}
