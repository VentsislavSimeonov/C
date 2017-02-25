using System;

namespace DetectiveBoev
{
    class Program
    {
        static void Main(string[] args)
        {
            #region Input
            string secretWord = Console.ReadLine();
            string message = Console.ReadLine();
            #endregion
            #region Logic for obtaining the mask
            char[] secretWordArray = secretWord.ToCharArray();
            int sum = 0;
            for (int i = 0; i < secretWordArray.Length; i++)
            {
                sum += (int)secretWordArray[i];
            }
            string sumString = sum.ToString();
            char[] sumStringArray = sumString.ToCharArray();
            string[] sumOfSum = new string[sumStringArray.Length];
            int secretWordLastSum = 0;
            for (int i = 0; i < sumStringArray.Length; i++)
            {
                sumOfSum[i] = sumStringArray[i].ToString();
                secretWordLastSum += int.Parse(sumOfSum[i]);
            }
            #endregion
            #region Text decript logic
            char[] messageArray = message.ToCharArray();
            int[] decriptedMessageCharInt = new int[messageArray.Length];
            for (int i = 0; i < messageArray.Length; i++)
            {
                if ((int)messageArray[i] % secretWordLastSum == 0)
                {
                    decriptedMessageCharInt[i] = (int)messageArray[i] + secretWordLastSum;
                }
                else 
                {
                    decriptedMessageCharInt[i] = (int)messageArray[i] - secretWordLastSum;
                }
            }
            char[] reversedResult = new char[decriptedMessageCharInt.Length];
            for (int i = 0; i < reversedResult.Length; i++)
            {
                reversedResult[reversedResult.Length - 1 - i] = (char)decriptedMessageCharInt[i];
            }
            foreach (var i in reversedResult)
            {
                Console.Write(i);
            }

            #endregion
            //works only for the first example
        }
    }
}
