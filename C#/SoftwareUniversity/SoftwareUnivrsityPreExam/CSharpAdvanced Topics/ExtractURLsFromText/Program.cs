using System;
using System.Text.RegularExpressions;

namespace ExtractURLsFromText
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Input some text with URLs here and Magic will happen:");
            string text = Console.ReadLine();
            Regex linkParser = new Regex(@"(?:https?://|www.)\S+\b", RegexOptions.Compiled | RegexOptions.IgnoreCase);
            foreach (var item in linkParser.Matches(text))
            {
                Console.WriteLine(item);
            }
        }
    }
}
