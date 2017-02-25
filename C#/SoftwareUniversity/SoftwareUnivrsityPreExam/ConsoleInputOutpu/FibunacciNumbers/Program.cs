using System;

namespace FibunacciNumbers
{
    class Program
    {
        static void Main(string[] args)
        {
            //input
            #region

            Console.WriteLine("How many numbers of the Fibunacci sequence do you want to display:");
            int counter = int.Parse(Console.ReadLine());
            int x1 = 0;
            int x2 = 1;

            #endregion

            //logic and output
            #region

            if (counter == 0) //logic if input = 0
            {
                Console.WriteLine("Invalid input");
            } else if (counter == 1) //logic if input = 1
            {
                Console.WriteLine("The Fibunacci number is {0}", 0);
            }
            else if (counter == -1) //logic if input = -1
            {
                Console.WriteLine("The Fibunacci number is -{0}", 0);
            }
            else if (counter < 0)//logic if input < 0
            {
                Console.Write("The first {0} Fibunacci numbers are: -{1}, -{2}", counter, x1, x2);
                for (int i = -2;i > counter; i--)
                {
                    int x3 = x1 + x2;
                    Console.Write(", -{0}", x3);
                    x1 = x2;
                    x2 = x3;
                }

            } else //logic if input > 0
            {
                Console.Write("The first {0} Fibunacci numbers are: {1}, {2}", counter, x1, x2);
                for (int i = 2; i < counter; i++)
                {
                    int x3 = x1 + x2;
                    Console.Write(", {0}", x3);
                    x1 = x2;
                    x2 = x3;
                }
            }

            #endregion
        }
    }
}
