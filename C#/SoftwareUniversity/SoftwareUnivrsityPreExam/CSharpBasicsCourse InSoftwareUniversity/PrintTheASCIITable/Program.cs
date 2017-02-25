using System;
using System.Text;

namespace PrintTheASCIITable
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.ASCII;
            for (int i = 0; i <= 255; i++)
            {
                Console.WriteLine("{0}==>{1}", i, (char)i);
            }
            Console.Read();
        }
    }
}
