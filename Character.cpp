#include "Character.h"

#include <iostream>
using namespace std;


char Character(char start, int offset)
{
	char newChar;
	string invalidRangeException = "Error. Invalid range encountered. \nPlease use a character and offset combination that does not result in a character before A/a or after Z/z\n"; // These strings hold the error messages for the exceptions
	string invalidCharacterException = "Error. Invalid character encountered. \nPlease use a letter that is between A/a and Z/Z\n";

	if (start == 'a' && offset < 0 || start == 'A' && offset < 0 || start == 'z' && offset > 0 || start=='Z' &&offset>0)
	{
		throw invalidRangeException;
	}

	else
	{
		if (!isalpha(start)) {

			throw invalidCharacterException;

			

		}

		else
		{
			if (start + offset < 65 || start + offset >= 91 && start + offset <= 97 || start + offset >= 123 || isupper(start) && start + offset <= 64 || isupper(start) && start + offset >= 91 || !isupper(start) && start + offset <= 96 || !isupper(start) && start + offset >= 123) // This long if statement checks to make sure that the character plus the offset is within the range of ASCII letters and it also stops case conversion 
			{

				throw invalidRangeException;

			}

			else
			{
				newChar = start + offset;
				return newChar; // If the data has passed through the if statements without throwing an exception, then the new character
			}
		}

	}

	






}