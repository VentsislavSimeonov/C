#include <iostream>
#include <string.h>

using namespace std;

/* Class for calculating a triangle's and a rectangl's 'obikolka i lice' */
/*
class Ex1 {
private:
	int a, b, c, p, s;
public:
	Ex1(int a = 0, int b = 0, int c = 0) {
		cout << __PRETTY_FUNCTION__ << endl;
	};

	~Ex1() {
		cout << __PRETTY_FUNCTION__ << endl;
	}
};
*/

class strA {
private:
	char*S;
	int len;
public:
	/*	Default Constructor	*/
	strA() {
		/*Start Initialization*/
		S = NULL;
		len = 0;
	};
	/*	Defined Constructor	*/
	strA(char* s) {
		len = strlen(s);
		S = new char[len + 1];
		/*	Initialization from strings added by the user	*/
		strcpy(S, s);
	};
	/*	Copy Constructor	*/
	strA(strA & s) {
		len = s.len;
		/* Safe copy of S* */
		S = new char[len + 1];
		strcpy(S, s.S);
	};
	/*	Destructor	*/
	~strA() {
		delete[] S;
	}

	/*	Sorting Method Bubble Sort	*/
	void Sort(strA s[], int n) {
		strA temp;
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = n - 1; j > i ; j--)
			{
				if (strcmp(s[j].S, s[j - 1].S) < 0) {
					temp.SetStr2(s[j].S);
					s[j].SetStr2(s[j-1].S);
					s[j - 1].SetStr2(temp.S);
				}
			}
		}
	}

	void SetStr2(char*str) {
		if (S != NULL) {
			delete[]S;
		}
		len = strlen(str) + 1;
		S = new char[len];
		strcpy(S, str);
	}

	/*	Method returning the content	*/
	const char*GetStr()const {
		return S;
	}
	/*	Entering the string to the class*/
	void SetStr() {
		/*	If there is something in memory delete it	*/
		if (S != NULL) {
			delete[] S;
		}else{
			/*	Create an array and ask the user what to fill it with	*/
			char a[256];
			cin.getline(a, 256);
			/*	Check the lenght	*/
			len = strlen(a) + 1;
			/*	Alocate memory	*/
			S = new char[len];
			strcpy(S, a);
		}
	}
};

int main() {
	int n;
	int i;
	
	cout << "Enter the number of strings that you want!" << endl;
	cin >> n;
	if (n < 0) {
		cout << "You have not entered the correct number!" << endl;
		return 0;
	}
	char c[2];
	cin.getline(c, 2);
	/*	Create an array of n  number of strings	*/
	strA *s = new strA[n];
 
	/*	Entering the strings	*/
	for (i = 0; i < n; i++)
	{
		cout << endl;
		s[i].SetStr();
	}


	for (i = 0; i < n; i++)
	{
		cout << endl << s[i].GetStr() << endl;
	}
	
	/* Delete the array of chars */
	delete[] s;

	return 0;
}