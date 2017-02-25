using System;

namespace Sequence
{
    class Program
    {
        static void Main(string[] args)
        {
            int x = 2;
            int y = -3;
            int temp1 = -2;
            int temp2 = 2;

            for (int i = 0; i < 5; i++) {
                Console.Write(x + ", " + y + ", ");
                x = x + temp2;
                y = y + temp1;
            };
            Console.Read();
        }
    }
}
