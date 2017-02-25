using System;

namespace InsideACircleAndOutsideARectangle
{
    class Program
    {
        static void Main(string[] args)
        {
            //input
            #region

            Console.WriteLine("You will need to input two coordinates for a circle K({1.1}, 1.5 ):");
            Console.WriteLine("Input X coordinate:");
            double inputX = double.Parse(Console.ReadLine());
            Console.WriteLine("Input Y coordinate:");
            double inputY = double.Parse(Console.ReadLine());

            #endregion

            //output and logic
            #region

            if ((Math.Pow((inputX - 1), 2) + Math.Pow((inputY - 1), 2) <= Math.Pow(1.5, 2)) &&
                (inputX <= 2.5 && inputX >= -0.5) && (inputY <= 2.5 && inputY > 1))
            {
                Console.WriteLine("yes");
            }
            else
            {
                Console.WriteLine("no");
            }

            #endregion
        }
    }
}
