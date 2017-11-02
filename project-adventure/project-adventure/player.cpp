#include "player.h"

/// PUBLIC CLASS DATA

/**
 *	Initializes a player object with a default name
 *		of "Traveler."
 */
player::player() :
	name( "Traveler" ), health( 100 ),
	armor( 100 ), multiplier( 0 )
{
}

/**
 *	Initializes a player object with a specified name.
 *	@param playerName -> the player's name
 */
player::player( string playerName ) :
	name( playerName ), health( 100 ),
	armor( 100 ), multiplier( 0 )
{
}

/**
 *	Initializes a player object with a specified name
 *		and health level.
 *	@param	playerName	-> character name
 *			hp			-> health level
 */
player::player( string playerName, int hp ) :
	name( playerName ), health( hp ),
	armor( 100 ), multiplier( 0 )
{
}

/**
 *	Initializes a player object with a specified name,
 *		health level and armor level.
 *	@param	playerName	-> character name
 * 			hp			-> health level
 *			ar			-> armor level
 */
player::player( string playerName, int hp, int ar ) :
	name( playerName ), health( hp ),
	armor( 100 ), multiplier( 0 )
{
}

/**
 *	Destroys a player object.
 */
player::~player()
{
}

/**
 *	Sets the player's health level.
 *	@param hp -> the new health level to set
 */
void player::setHealth( int hp )
{
	health = hp;
}

/**
 *	Sets the player's armor level.
 *	@param ar -> the new armor level to set
 */
void player::setArmor( int ar )
{
	armor = ar;
}

/**
 *	Returns a player's health level.
 */
int player::getHealth()
{
	return health;
}

/**
 *	Returns a player's armor level.
 */
int player::getArmor()
{
	return armor;
}

/**
 *	Returns a player's name.
 */
string player::getName()
{
	return name;
}

/// PRIVATE CLASS DATA

/**
 *	Sets a player's name.
 *	@param newName -> the new name to be set
 */
void player::setName(string newName)
{
	name = newName;
}