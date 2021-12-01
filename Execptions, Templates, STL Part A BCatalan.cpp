//Brennan Catalan
//12/1/2021
//CIS 1202 502
#include <iostream>
#include "Character.h"

using namespace std;

int main()
{
    char character;


    cout << endl << "Executing try #1 with pair (A,32)..." <<endl;
    try {
     character = Character('A',32 );
        cout << "The character is: " << character <<endl;
        }
    catch (string exception) // This simply catches the exception and sends it to cout.
    {
        cout << exception;
   }

    cout << endl << "Executing try #2 with pair (z,-32)..." << endl;
    try {
        character = Character('z', -32);
        cout << "The character is: " << character <<endl;
    }
    catch (string exception)
    {
        cout << exception;
    }
    

    cout << endl << "Executing try #3 with pair (a,1)..." << endl;
    try {
         character = Character('a', 1);
        cout << "The character is: " << character <<endl;
    }
    catch (string exception)
    {
        cout << exception;
    }

    cout << endl << "Executing try #4 with pair (A,-5)..." << endl;
    try {
       character = Character('A', -5);
        cout << "The character is: " << character <<endl;
    }
    catch (string exception)
    {
        cout << exception;
    }



    cout  <<endl << "Executing try #5 with pair (Z, -2)..." << endl;
    try {
      character = Character('Z', -2);
        cout << "The character is: " << character <<endl;
    }
    catch (string exception)
    {
        cout << exception;
    }
    cout << endl << "Executing try #6 with pair (?, -2)..." << endl;
    try {
        character = Character('?', -2);
        cout << "The character is: " << character << endl;
    }
    catch (string exception)
    {
        cout << exception;
    }
}


