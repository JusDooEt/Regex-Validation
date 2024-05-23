#include <iostream>
#include <string>
#include <regex>
using namespace std;

bool verifyPassword(string password)
{
	const int minLength = 12;
	regex capitalLetter("[A-Z]+");
	regex lowerLetter("[a-z]+");
	regex digit("[0-9]+");
	regex specialCharacter("[_\\.\\-*,!\\^%&$#@]+");
	smatch m;
	bool isCapitalLetter = false;
	bool isLowerLetter = false;
	bool isDigit = false;
	bool isSpecialCharacter = false;
	bool isLong = false;

	if (password.length() < 12)
	{
		cout << "\n\t< Your password needs " 
			 << 12 - password.length() 
			 << " characters! >\n\n";
	}
	else
	{
		isLong = true;
	}

	if (!regex_search(password, m, capitalLetter))
	{
		cout << "\n\t< Your password needs a capital letter! >\n\n";
	}
	else
	{
		isCapitalLetter = true;
	}

	if (!regex_search(password, m, lowerLetter))
	{
		cout << "\n\t< Your password needs a lower case letter! >\n\n";
	}
	else
	{
		isLowerLetter = true;
	}

	if (!regex_search(password, m, digit))
	{
		cout << "\n\t< Your password needs a number! >\n\n";
	}
	else
	{
		isDigit = true;
	}

	if (!regex_search(password, m, specialCharacter))
	{
		cout << "\n\t< Your password needs a special character! >\n\n";
	}
	else
	{
		isSpecialCharacter = true;
	}

	return (isLong && isCapitalLetter && isLowerLetter && isDigit && isSpecialCharacter);
}