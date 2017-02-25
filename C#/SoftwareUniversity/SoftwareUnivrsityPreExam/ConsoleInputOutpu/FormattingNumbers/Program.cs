using System;

namespace FormattingNumbers
{
    class Program
    {
        static void Main(string[] args)
        {
            //input
            #region
            
            int intNumber = 0;
            do
            {
                Console.WriteLine("Enter an integer a:");
                intNumber = int.Parse(Console.ReadLine());
            } while (0 > intNumber || intNumber > 500);

            Console.WriteLine("Enter a floating-point b:");
            float firstFloatNumber = float.Parse(Console.ReadLine());

            Console.WriteLine("Enter a floating-point c:");
            float secondFloatNumber = float.Parse(Console.ReadLine());

            #endregion

            //logic
            #region

            string xex = Convert.ToString(intNumber, 16).ToUpper();
            string binary = Convert.ToString(intNumber, 2).ToUpper();
            string firstFloatToString = firstFloatNumber.ToString();
            string secondFloatToString = secondFloatNumber.ToString();

            #endregion

            //output
            #region

            Console.Write("|{0,-10}", xex);
            Console.Write("|{0,10}|", binary.PadLeft(10, '0'));
            Console.Write("{0,10:F2}|", firstFloatToString);
            Console.Write("{0,-10:F3}|", secondFloatToString);

            #endregion
        }
    }
}
