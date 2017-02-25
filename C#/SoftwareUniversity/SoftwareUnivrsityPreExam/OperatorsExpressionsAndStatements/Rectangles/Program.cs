using System;

namespace Rectangles
{
    class Program
    {
        static void Main(string[] args)
        {
            //input
            #region

            Console.WriteLine("Input width of a rectangle");
            double widthTriangle = double.Parse(Console.ReadLine());
            Console.WriteLine("Input height of a rectangle");
            double heightTriangle = double.Parse(Console.ReadLine());

            #endregion

            //output && logic
            #region

            double trianglePerimeter = (widthTriangle + heightTriangle) * 2;
            double triangleArea = widthTriangle * heightTriangle;
            Console.WriteLine("The Perimeter of the rectangle is: {0:f2} cm", trianglePerimeter);
            Console.WriteLine("The Area of the rectangle is: {0:f2} cm^2", triangleArea);

            #endregion
        }
    }
}
