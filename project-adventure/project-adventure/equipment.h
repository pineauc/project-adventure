#ifndef __EQUIPMENT_H__
#define __EQUIPMENT_H__

#include "player.h"

class equipment : public player {
public:
	// Default constructor
	equipment();

	// Destructor
	~equipment();

	/// Member functions
	// Mutators
	void	setHead( int );
	void	setTorso( int );
	void	setHands( int );
	void	setLegs( int );
	void	setFeet( int );

	// Accessors
	int		getHead();
	int		getTorso();
	int		getHands();
	int		getLegs();
	int		getFeet();
	int		getArmor();

private:
	// Instance data
	int	head, torso, hands,	// Body parts are assigned item IDs
		legs, feet;
	int armor;				// Player's armor level
};

#endif