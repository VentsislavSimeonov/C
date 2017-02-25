using System;

namespace PointInACircle
{
    class Program
    {
        static void Main(string[] args)
        {
            //input
            #region

            Console.WriteLine("Give me a number to check if it is within a circle with the center at 0,0 and a radius of 2");
            Console.WriteLine("Type in the coordinates of the point on the X directrise");
            double pointX = double.Parse(Console.ReadLine());
            Console.WriteLine("Type in the coordinates of the point on the Y directrise");
            double pointY = double.Parse(Console.ReadLine());

            #endregion

            //logic and output
            #region

            bool check = Math.Pow((pointX - 0), 2) +
                         Math.Pow((pointY - 0), 2) <= Math.Pow(2, 2);
            string statement;
            if (check == true)
            {
                statement = "Yes";
            }
            else
            {
                statement = "No";
            }
            Console.WriteLine("Is the point in the circle? {0}", statement);

            #endregion
        }
    }
}
