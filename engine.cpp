// Libraries
#include <Windows.h>
#include <string>
#include <iostream>

// Namespace
using namespace std;

/**
 *	Types out a string one character at a time.
 *	@param text -> the text to display
 */
void typeString( string text )
{
	unsigned int length = text.length();

	for ( unsigned int i = 0; i < length; i++ )
	{
		if ( text[i] == '\\' && text[i + 1] == 'n' )
			cout << endl;
		else
			cout << text[i];
		Sleep( 100 );
	}
}