/***********************************************************************
** Program name: Fantasy Combat Tournament
** Author:       Chen Zou 
** Date:         16 May 2018
** Description:  This is the source files for class Barbarian, which
		 inherits the Character class. 
***********************************************************************/
#include"Barbarian.hpp"

// default constructor
Barbarian::Barbarian():Character()
{
	setName("Barbarian");
	armor = 0;
	strength = 12;
	attackSides = 6;
	attackRolls = 2;
	defenseSides = 6;
	defenseRolls = 2;
}

// destructor
Barbarian::~Barbarian()
{
	
}




		

