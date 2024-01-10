#include<iostream>
#include<string>

using namespace std;

int main()
{
	string myStr;
	int count = 0;

	cout << "\nEnter a String: ";
	getline(cin, myStr);

	int i = 0;

	while (myStr[i] != '\0')
	{
		if (myStr[i] != ' ')
		{
			count++;
			i++;
		}
		else 
		{
			i++;
		}
	}

	cout << "\nThe total number of characters in the string are: " << count;

	cout << endl;
	return 0;
}