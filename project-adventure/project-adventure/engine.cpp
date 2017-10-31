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
	// Store string length
	unsigned int length = text.length();

	// Iterate through the string
	for ( unsigned int i = 0; i < length; i++ )
	{
		// Looks for carriage return
		if ( text[i] == '\\' && text[i + 1] == 'n' )
			cout << endl;

		// Displays regular characters
		else
			cout << text[i];

		// Time to wait between characters
		Sleep( 50 );
	}
}

/**
 *	Creates a small pause, causing the player to wait
 *		a specified number of seconds.
 *	@params	sec				-> the number of seconds to wait
 *			input	true	-> wait for user input
 *					false	-> program continues
 */
void wait( int sec, bool input )
{
	// Iterate for the number of seconds the player must wait
	for ( int i = 0; i < sec; i++ )
	{
		typeString( ". " );
		Sleep( sec * 150 );
	}
	
	cout << endl;

	if ( input )
		typeString( "Press SPACE to continue...\n" );
}

/**
 *	Uses random number generation to calculate the
 *		player's damage output per attack.
 *	@param mult -> player's damage multiplier
 *	@return the damage dealt

int damage(int mult)
{
	
}
*/
int main()
{
	wait( 3, true );
	system("pause");
}