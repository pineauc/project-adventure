#ifndef __PLAYER_H__
#define __PLAYER_H__

// Libraries
#include <string>

// Namespace
using std::string;

/**
 *	Maintains player data.
 */
class player {
public:
	// Default constructor
	player();

	// Custom constructors
	player( string );
	player( string, int );
	player( string, int, int );

	// Destructor
	~player();

	/// Member functions
	// Mutators
	void	setHealth( int );
	void	setArmor( int );

	// Accessors
	int		getHealth();
	int		getArmor();
	string	getName();

	// Character body
	int		head();
	int		torso();
	int		r_hand();
	int		l_hand();
	int		r_leg();
	int		l_leg();
	int		r_foot();
	int		l_foot();

private:
	// Instance data
	string	name;		// Player's name
	int		health;		// Player's health
	int		armor;		// Player's armor
	float	multiplier;	// Damage multiplier

	// Mutators
	void setName( string );
};

#endif