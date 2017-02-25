using System;

namespace PrintCompanyInformation
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("Please input the name of the Company: ");
            string companyName = Console.ReadLine();
            Console.WriteLine("Please input the Company's address: ");
            string companyAddress = Console.ReadLine();
            Console.WriteLine("Please input the Company's phone number");
            string phoneNumber = Console.ReadLine();
            Console.WriteLine("Please input the Company's fax number: ");
            string faxNumber = Console.ReadLine();
            Console.WriteLine("Please input the Company's website: ");
            string webSite = Console.ReadLine();
            Console.WriteLine("Please input the Manager's First name: ");
            string managerFirstName = Console.ReadLine();
            Console.WriteLine("Please input the Manager's Last name: ");
            string managerLastName = Console.ReadLine();
            Console.WriteLine("Please input the Manager's age: ");
            int managerAge = int.Parse(Console.ReadLine());
            Console.WriteLine("Please input the Manager's phone: ");
            string managerPhone = Console.ReadLine();

            Console.WriteLine();
            Console.WriteLine("{0} \n Adress: {1} \n Tel. {2} \n Fax: {3} \n Web site: {4} \n Manager: {5} {6} (age: {7}, tel. {8})", 
                                companyName, companyAddress, phoneNumber, faxNumber, webSite, 
                                managerFirstName, managerLastName, managerAge, managerPhone);
        }
    }
}
