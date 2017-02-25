using System;

namespace AgeAfter10Years
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            int age;
            Int32.TryParse(input, out age);
            int ageIn10 = age + 10;
            Console.WriteLine("Your Current age is: " + age);
            Console.WriteLine("In 10 years your age will be: " + ageIn10);
            Console.ReadLine();
        }
    }
}
