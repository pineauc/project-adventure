#include "player.h"

/// PUBLIC CLASS DATA

/**
 *	Initializes a player object with a default name
 *		of "Traveler."
 */
player::player() : 
	name( "Traveler" ), hitpoints( 100 )
{
}

/**
 *	Initializes a player object with a player-defined
 *		character name.
 *	@param playerName -> the player's name
 */
player::player( string playerName ) :
	name( playerName ), hitpoints( 100 )
{
}

/**
 *	Destroys a player object.
 */
player::~player()
{
}

/**
 *	Sets the player's hitpoint level.
 *	@param hp -> the new hitpoint level to set
 */
void player::setHitpoints( int hp )
{
	hitpoints = hp;
}

/**
 *	Returns a player's hitpoint level.
 */
int player::getHitpoints()
{
	return hitpoints;
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