#ifndef __PLAYER_H__
#define __PLAYER_H__

// Libraries
#include <string>
#include <fstream>

// Namespace
using namespace std;

/**
 *	Maintains player data.
 */
class player {
public:
	// Constructors
	player();
	player( string );

	// Destructor
	~player();

	/// Member functions
	// Mutators
	void setHitpoints( int );

	// Accessors
	int getHitpoints();
	string getName();

private:
	// Instance data
	string name;
	int hitpoints;

	// Mutators
	void setName(string);
};

#endif