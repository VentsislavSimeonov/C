using System;

namespace PlayWithIntDoubleAndString
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Please choose a type:");
            Console.WriteLine("1 --> int \n2 --> double \n3 --> string");
            string numberInput = Console.ReadLine();

            //with if statement
            #region
            /*
            if (numberInput == 1)
            {
                Console.WriteLine("Please enter an int:");
                int intInput = int.Parse(Console.ReadLine());
                Console.WriteLine("{0}", intInput++);
            }
            else if (numberInput == 2)
            {
                Console.WriteLine("Please enter a double:");
                double doubleInput = double.Parse(Console.ReadLine());
                Console.WriteLine("{0}", doubleInput++);
            }
            else if (numberInput == 3)
            {
                Console.WriteLine("Please enter a string:");
                string stringInput = Console.ReadLine();
                Console.WriteLine("{0}*", stringInput);
            }
            */
            #endregion

            //with switch statement
            #region
            switch (numberInput)
            {
                case "1":
                    Console.WriteLine("Input an int number:");
                    int intInput = int.Parse(Console.ReadLine());
                    int intResult = intInput + 1;
                    Console.WriteLine("{0}", intResult);
                    break;
                case "2":
                    Console.WriteLine("Input a double number:");
                    double doubleInput = double.Parse(Console.ReadLine());
                    double doubleResult = doubleInput + 1;
                    Console.WriteLine("{0}", doubleResult);
                    break;
                case "3":
                    Console.WriteLine("Input a string:");
                    string stringInput = Console.ReadLine();
                    Console.WriteLine("{0}*", stringInput);
                    break;
                default:
                    Console.WriteLine("Invalid Input!");
                    break;
            }
            #endregion

        }
    }
}
