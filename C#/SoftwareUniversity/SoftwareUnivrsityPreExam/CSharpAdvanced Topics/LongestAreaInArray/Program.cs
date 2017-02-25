using System;

namespace LongestAreaInArray
{
    class Program
    {
        static void Main(string[] args)
        {
            //lenght of the array and parsing it to the propper format
            Console.WriteLine("Input the number of elements for the array:");
            int n = int.Parse(Console.ReadLine());
            string[] elements = new string[n];
            int numberEqualElements = 1;
            int[] arrayRepeatElements = new int[n];
            int[] startPositionRepeatElement = new int[n];
            
            //adding elements to the array
            for (int i = 0; i < n; i++)
            {
                elements[i] = Console.ReadLine();
            }
            Console.WriteLine();

            //find how many elements are beig repeated
            string refrenceElement = elements[0];
            int l = 0;
            startPositionRepeatElement[l] = 0;
            for (int i = 1, k = 0; i < n; i++)
            {
                if (refrenceElement == elements[i])
                {
                    l++;
                    numberEqualElements++;
                    startPositionRepeatElement[l] = k;
                }
                else
                {
                    if (l > k)
                    {
                        k = l;
                    }
                    l++;
                    k++;
                    arrayRepeatElements[i] = numberEqualElements;
                    refrenceElement = elements[i];
                    numberEqualElements = 1;
                    startPositionRepeatElement[l] = k;
                }
            }
            //which are the repeated elements > add them to an array to be printed
            for (int i = 0; i < n; i++)
            {
                if (numberEqualElements > arrayRepeatElements[i] ||
                    numberEqualElements == elements.Length)
                {
                    if (i == n - 1)
                    {
                        Console.WriteLine(numberEqualElements);
                        for (int j = startPositionRepeatElement[i]; j < n; j++)
                        {
                            Console.WriteLine("{0}", elements[j]);
                        }
                        break;
                    }
                }
                else if (numberEqualElements == arrayRepeatElements[i] && numberEqualElements == 1)
                {
                    for (int j = 0; j < n; j++)
                    {
                        if (refrenceElement.Length > elements[j].Length)
                        {
                            continue;
                        }
                        else
                        {
                            refrenceElement = elements[j];
                        }
                    }
                    Console.WriteLine(numberEqualElements);
                    Console.WriteLine(refrenceElement);
                    break;
                }
                else if (numberEqualElements == arrayRepeatElements[i] && numberEqualElements > 1)
                {
                    Console.WriteLine(arrayRepeatElements[i]);
                    refrenceElement = elements[0];
                    int m = 1;
                    for (; m < n; m++)
                    {
                        if (refrenceElement == elements[m])
                        {
                            break;
                        }
                        else
                        {
                            refrenceElement = elements[m];
                        }
                    }
                  
                    //print the elements
                    for (int j = startPositionRepeatElement[m]; j < i; j++)
                    {
                        Console.WriteLine("{0}", elements[j]);
                    }
                    break;
                }
            }
        }
    }
}
