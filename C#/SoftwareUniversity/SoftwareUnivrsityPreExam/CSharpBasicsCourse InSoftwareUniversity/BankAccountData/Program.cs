using System;

namespace BankAccountData
{
    class Program
    {
        static void Main(string[] args)
        {

            String firstName = "Ventsislav";
            String middleName = "Nikolaev";
            String lastName = "Simeonov";
            ulong balance = 1000584254;
            String bankName = "FedaralDonkeyReserve";
            String iban = "bg173589775289fdsjgd12478";
            long creditCardNumber1 = 852045697894512;
            long creditCardNumber2 = 852045698578964;
            long creditCardNumber3 = 852045854852512;
            String n = "\n";

            Console.WriteLine("Firsrt Name: " + firstName + n 
                            + "Middle Name: " + middleName + n 
                            + "Last Name: " + lastName + n
                            + "Balance: " + balance + n
                            + "Bank Name: " + bankName + n
                            + "IBAN: " + iban + n
                            + "Credit Card Number #1: " + creditCardNumber1 + n
                            + "Credit Card Number #2: " + creditCardNumber2 + n
                            + "Credit Card Number #3: " + creditCardNumber3);
            Console.Read();

        }
    }
}
