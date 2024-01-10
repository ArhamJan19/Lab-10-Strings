#include<iostream>
#include<string>
using namespace std;
int main()
{
	string palindrome = "";
	string str = "";
	int palindromeIndex = 0;
	bool flag = false;
	cout << "Enter a string : ";
	getline(cin, str);
	for (int i = str.length() - 1; i >= 0; i--)
	{
		palindrome[palindromeIndex] = str[i];
		palindromeIndex++;
	}
	for (int j = 0; j < str.length(); j++)
	{
		if (str[j] != palindrome[j]) {
			flag = true;
		}
	}
	if (flag == false)
	{
		cout << "This string is a palindrome";
	}
	else {
		cout << "This string is not a palindrome";
	}
	return 0;
}