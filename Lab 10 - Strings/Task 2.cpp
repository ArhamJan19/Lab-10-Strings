#include<iostream>
#include<string>

using namespace std;

int main()
{
	string myStr;
	int len = 0;

	cout << "\n\nEnter a String: ";
	getline(cin, myStr);

	int i = 0;

	while (myStr[i] != '\0')
	{
		len++;
		i++;
	}

	cout << "\n\nLength of the String is " << len << ".";

	cout << endl;
	return 0;
}