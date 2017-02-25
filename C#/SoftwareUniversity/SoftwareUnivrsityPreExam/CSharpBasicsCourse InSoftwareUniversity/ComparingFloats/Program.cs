using System;

namespace ComparingFloats
{
    class Program
    {
        static void Main(string[] args)
        {
            double a = 5.00000001;
            double b = 5.00000003;
            double eps = 0.000001;

            if ((a - b) < 0)
            {
                if ((b - a) < eps)
                {
                    Console.WriteLine(true);
                } else
                {
                    Console.WriteLine(false);
                }
            } else if ((a - b) > 0)
            {
                if ((a - b) < eps)
                {
                    Console.WriteLine(true);
                } else
                {
                    Console.WriteLine(false);
                }
            }
          
            Console.Read();
        }
    }
}
