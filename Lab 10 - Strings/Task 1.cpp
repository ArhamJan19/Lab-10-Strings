#include<iostream>
#include<string>

using namespace std;

int main()
{
	string myStr;
	int choice;
	char character;


	cout << "\nEnter a String: ";
	getline(cin, myStr);

	cout << "\nBefore Deletion: ";
	cout << myStr << endl;

	cout << "\n Enter the character you want removed: ";
	cin >> character;
	cout << "To delete '" << character << "' at all instances, Enter 1\n\n" ;
	cout << "To delete '" << character << "' at a singular instance, Enter 2\n\n";
	cout << "choice : "; cin >> choice;
	if (choice == 1) 
	{
		for (int i = 0; i < myStr.length(); i++)
		{
			if (myStr[i] == character)
			{
				myStr.erase(i, 1);
			}
		}
	}
	else if(choice == 2)
	{
		int numChar;
		cout << "Please enter the Number for the character you want to remove (count the spaces if any): ";
		cin >> numChar;
		myStr.erase(numChar - 1, 1);
	}
	
	cout << "\nAfter Deletion: " << endl <<myStr;

	return 0;
}