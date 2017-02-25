# include <iostream>;
using namespace std;

void main() {
	char inputDirectrion;
	char inputSymbol;
	int count;
	bool check1 = false;
	bool check2 = false;

	//check for direction
	do
	{
		cout << "Choose the display Direction(h/v):" << endl;
		cin >> inputDirectrion;
		if (inputDirectrion == 'h' || inputDirectrion == 'H'
			|| inputDirectrion == 'v' || inputDirectrion == 'V')
		{
			check1 = true;			
		}
		else
		{
			check1 = false;
		}
	} while (check1 == false);
	//symbol input
	cout << "Type in the symbol to be Displayed: " << endl;
	cin >> inputSymbol;
	//check if the number is larger than 0
	do
	{
		cout << "Input how many times the Symbols will repeat: " << endl;
		cin >> count;
		if (count > 0)
		{
			check2 = true;
		}
		else
		{
			check2 = false;
		}
	} while (check2 == false);
	//logic
	cout << endl;
	if (inputDirectrion == 'h' || inputDirectrion == 'H')
	{
		for (int i = 0; i < count; i++)
		{
			cout << inputSymbol;
		}
		cout << endl;
	}
	else if (inputDirectrion == 'v' || inputDirectrion == 'V')
	{
		for (int i = 0; i < count; i++)
		{
			cout << inputSymbol << endl;
		}
	}
}