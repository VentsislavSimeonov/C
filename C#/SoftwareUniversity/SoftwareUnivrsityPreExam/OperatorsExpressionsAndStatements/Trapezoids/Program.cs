using System;

namespace Trapezoids
{
    class Program
    {
        static void Main(string[] args)
        {
            //input
            #region

            Console.WriteLine("This will calculate the area of a trapezoid:");
            Console.WriteLine("Input the lenght of side A:");
            double inputA = double.Parse(Console.ReadLine());
            Console.WriteLine("Input the lenght of side B:");
            double inputB = double.Parse(Console.ReadLine());
            Console.WriteLine("Input the lenght of the hight H:");
            double inputH = double.Parse(Console.ReadLine());

            #endregion

            //logic and output
            #region
            double triangleArea;
            double trapezoidArea;
            if (inputB >= inputA)
            {
                triangleArea = ((inputB - inputA) * inputH) / 2;
                trapezoidArea = (inputA * inputH) + triangleArea;
            }
            else
            {
                triangleArea = ((inputA - inputB) * inputH) / 2;
                trapezoidArea = (inputB * inputH) + triangleArea;
            }

            Console.WriteLine("The Trapezoid's area is: {0}", trapezoidArea);

            #endregion
        }
    }
}
