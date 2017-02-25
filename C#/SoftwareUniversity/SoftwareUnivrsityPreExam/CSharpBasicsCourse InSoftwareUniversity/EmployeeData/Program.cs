using System;

namespace EmployeeData
{
    class Program
    {
        static void Main(string[] args)
        {
            String firstName = "Ventsislav";
            String secondName = "Simeonov";
            int age = 25;
            Boolean isMale = true;
            long idNumber = 9007145658;
            int emloyeeNumber = 27569999;

            Console.WriteLine("First Name: " + firstName + "\n" 
                            + "Second Name: " + secondName + "\n" 
                            + "Age: " + age);
            if (isMale == true)
            {
                Console.WriteLine("Gender: m");
            }
            else
            {
                Console.WriteLine("Gender: f");
            }
            Console.WriteLine("Personal ID:" + idNumber + "\n" 
                            + "Unique Employee Number: " + emloyeeNumber);
            Console.Read();
        }
    }
}

