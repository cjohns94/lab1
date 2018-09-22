#include "Archer.h"

using namespace std;


Archer::~Archer(){
    cout << "In destructor" << endl;
}

int Archer::getDamage(){
    
/*		Archer:
		This value is equal to the Archer's speed.
*/
    return speed;
}

void Archer::takeDamage(int damage){
    
	/*
	*	takeDamage(int)
	*
	*	Reduces the fighter's current hit points by an amount equal to the given
	*	damage minus one fourth of the fighter's speed.  This method must reduce
	*	the fighter's current hit points by at least one.  It is acceptable for
	*	this method to give the fighter negative current hit points.
	*/
	
	int damage_taken = damage - speed/4;
	
	//Check to make sure damage is at least one.
	if (damage_taken < 1){
	    damage_taken = 1;
	}
	
	//Decrease current HP
	current_hit_pts = current_hit_pts - damage_taken;
    
}

void Archer::reset(){
    /*
	*	Restores a fighter's current hit points to its maximum hit points.
	*	Archer:
	*	Also resets an Archer's current speed to its original value.
	*/

    //Restore current hit points
	current_hit_pts = max_hit_pts;
	
	//Reset current speed
	current_speed = speed;
    
}

void Archer::regenerate(){
    /*
	*	regenerate()
	*
	*	Increases the fighter's current hit points by an amount equal to one sixth of
	*	the fighter's strength.  This method must increase the fighter's current hit
	*	points by at least one.  Do not allow the current hit points to exceed the
	*	maximum hit points.
	*/
	
	//Increase fighter currentHP
	int HPincrease = strength/6;
	
	//Check to make increase is at least 1
	if (HPincrease < 1){
	    HPincrease = 1;
	}
	
	//Increase current HP
	current_hit_pts = current_hit_pts + HPincrease;
	
	//Do not allow current to exceed max
	if(current_hit_pts > max_hit_pts){
		current_hit_pts = max_hit_pts;
	}
    
}

bool Archer::useAbility(){ //NEED TO IMPLEMENT

    /*
    *	useAbility()
	*
	*	Attempts to perform a special ability based on the type of fighter.  The
	*	fighter will attempt to use this special ability just prior to attacking
	*	every turn.
	*	Archer: Quickstep
	*	Increases the Archer's speed by one point each time the ability is used.
	*	This bonus lasts until the reset() method is used.
	*	This ability always works; there is no maximum bonus speed.
	*/
    return true;
}