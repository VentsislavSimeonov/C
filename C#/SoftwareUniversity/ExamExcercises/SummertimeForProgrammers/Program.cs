using System;

namespace SummertimeForProgrammers
{
    class Program
    {
        static void Main(string[] args)
        {
            #region Input Parameters
            int number = int.Parse(Console.ReadLine());
            int widthBottom = 2 * number;
            int widthTop = number + 1;
            int hight = (3 * number) + 1;
            string asterix = "*";
            string dot = ".";
            string theAtSign = "@";
            string emptySpace = " ";
            int space = (widthBottom - widthTop) / 2;
            #endregion
            for (int i = 0; i < hight; i++)
            {
                #region top of the beer
                if (i == 0)
                {
                    for (int j = 0; j < space; j++)
                    {
                        Console.Write(emptySpace);
                    }
                    for (int j = 0; j < widthTop; j++)
                    {
                        Console.Write(asterix);
                    }
                    Console.WriteLine();
                }
                #endregion
                #region empty space of the beer
                if (i > 0 && i < number - 1)
                {
                    for (int j = 0; j < space; j++)
                    {
                        Console.Write(emptySpace);
                    }
                    Console.Write(asterix);
                    for (int j = 0; j < number - 1; j++)
                    {
                        Console.Write(emptySpace);
                    }
                    Console.Write(asterix);
                    Console.WriteLine();
                }
                #endregion
                #region midshaft

                #endregion
                #region empty part of the beer
                if (i > (hight - (number * 2) - 1) && i < (hight - number))
                {
                    Console.Write(asterix);
                    for (int j = 0; j < widthBottom - 2; j++)
                    {
                        Console.Write(dot);
                    }
                    Console.Write(asterix);
                    Console.WriteLine();
                }
                
                #endregion
                #region full part of the beer
                if (i > hight - number - 1)
                {
                    Console.Write(asterix);
                    for (int j = 0; j < widthBottom - 2; j++)
                    {
                        Console.Write(theAtSign);
                    }
                    Console.Write(asterix);
                    Console.WriteLine();
                }
                #endregion
                #region bottom of the beer
                if ((i +1) % hight == 0)
                {
                    for (int j = 0; j < widthBottom; j++)
                    {
                        Console.Write(asterix);
                    }
                    Console.WriteLine();
                }
                #endregion
            }
        }

    }
}
