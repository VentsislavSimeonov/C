using System;
using System.Text;

namespace IsoscelesTriangle
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.UTF8;
            char copyRight = '\u00A9';
            Console.WriteLine("{0,4}\n{0,3}{0,2}\n{0,2}{0,4}\n{0}{0,2}{0,2}{0,2}", copyRight);
            Console.Read();
        }
    }
}
