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
	void	equip( int );

	// Accessors
	string	getName();
	int		getHealth();
	int		getArmor();

	// Character body
	int		head();
	int		torso();
	int		hands();
	int		legs();
	int		feet();
	bool	isEquipped();

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