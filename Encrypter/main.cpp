#include<string>
#include<iostream>
using namespace std;

int main()
{
	string mode;
	int choice;
	while (true)
	{
		cout << "Welcome to the encryption/decryption program \n";
		cout << "Please type in the integer corresponding to what you would like to do.\n";
		cout << "1) Create an encrypted copy of a file\n";
		cout << "2) Decrypt an encrypted file \n";
		cout << "3) Quit\n"; 
		cin >> mode;
		choice = mode[0] - '0';
		if (mode.size() ==0 || mode.size()>1 || !isdigit(mode[0]) || choice<1 || choice>3)
		{
			cout << "Invalid input!\n";
		}
		if (choice == 3)
		{
			cout << "Quitting...";
			exit(0);
		}
		
	}
}