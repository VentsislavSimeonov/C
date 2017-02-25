#include <iostream>;
using namespace std;

void main() {
	int ch1 = 0, ch2 = 0;
	do {
		cout << "Please make your choice" << endl;
		cout << "1 Menu1" << endl;
		cout << "2 Menu2" << endl;
		cout << "3 Exit" << endl;
		cin >> ch1;
		switch (ch1)
		{
		case 1:
			do {
				cout << "Submenu Items. Please make your choice" << endl;
				cout << "1 SubMenu1" << endl;
				cout << "2 SubMenu2" << endl;
				cout << "3 Exit to main menu" << endl;
				cin >> ch2;
				switch (ch2)
				{
				case 1:
					cout << "You have chosen Submenu1" << endl;
					break;
				case 2:
					cout << "You have chosen Submenu2" << endl;
					break;
				case 3:
					break;
				default:
					cout << "Your choice is invalid" << endl;
					break;
				}
			} while (ch2 != 3);
			break;
		case 2:
			cout << "KRAI" << endl;
			ch1 = 3;
			break;
		case 3:
			break;
		default:
			cout << "Your choice is invalid" << endl;
			break;
		}
	} while (ch1 != 3);
	
	/* Please Enter choice:
	1 Menu1
	2 Menu2
	3 Exit
	  Menu1 >>
	  1 Submenu1
	  2 Submenu2
	  3 Exit to main menu
	  Menu2 >> Krai
	  */

}