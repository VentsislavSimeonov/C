using System;

namespace CirclePerimeterAndArea
{
    class Program
    {
        static void Main(string[] args)
        {
            //user Input
            #region
            Console.WriteLine("Input the Radius of the Circle with a number: ");
            double radius = double.Parse(Console.ReadLine());
            double pi = Math.PI;
            #endregion
            //Calculations
            #region
            double perimeter = 2 * pi * radius;
            double area = pi * radius * radius;
            #endregion
            //Output
            #region
            Console.WriteLine("The Radius is: {0:0.00}",perimeter);
            Console.WriteLine("The Area is: {0:0.00}", area);
            #endregion
        }
    }
}
