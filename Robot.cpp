
#include "Robot.h"
#include <math.h>

using namespace std;


Robot::~Robot(){
    cout << "In destructor" << endl;
}

int Robot::getDamage(){
    //Robot: This value is equal to the Robot's strength plus any additional damage added for having just used its special ability.
    int damage_stat = strength + bonus_damage;
    bonus_damage = 0;
    return damage_stat;
}

void Robot::takeDamage(int damage){
    /*
    *    Reduces the fighter's current hit points by an amount equal to the given
    *    damage minus one fourth of the fighter's speed.  This method must reduce
	*    the fighter's current hit points by at least one.  It is acceptable for
	*    this method to give the fighter negative current hit points.
	*/
	int damage_taken = damage - speed/4;
	
	//Check to make sure damage is at least one.
	if (damage_taken < 1){
	    damage_taken = 1;
	}
	
	//Decrease current HP
	current_hit_pts = current_hit_pts - damage_taken;
}

void Robot::reset(){
    
/*    Restores a fighter's current hit points to its maximum hit points.
	Robot:
	Also restores a Robot's current energy to its maximum value (which is 2 times its magic).
	Also resets a Robot's bonus damage (calculated when a Robot uses its ability) to 0.
*/
    
    //Reset currentHP
    current_hit_pts = max_hit_pts;
    
    //Restore current energy
    current_energy = max_energy;
    
    //Reset bonus damage
    bonus_damage = 0;
    
}

void Robot::regenerate(){
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

bool Robot::useAbility(){
    
	/*
	*	useAbility()
	*
	*	Attempts to perform a special ability based on the type of fighter.  The
	*	fighter will attempt to use this special ability just prior to attacking
	*	every turn.
	*
	*	Robot: Shockwave Punch
	*	Adds bonus damage to the Robot's next attack (and only its next attack) equal to (strength  * ((current_energy/maximum_energy)^4)).
	*	Can only be used if the Robot has at least [ROBOT_ABILITY_COST] energy.
	*	Decreases the Robot's current energy by [ROBOT_ABILITY_COST] (after calculating the additional damage) when used.
	*		Examples:
	*		strength=20, current_energy=20, maximum_energy=20		=> bonus_damage=20
	*		strength=20, current_energy=15, maximum_energy=20		=> bonus_damage=6
	*		strength=20, current_energy=10, maximum_energy=20		=> bonus_damage=1
	*		strength=20, current_energy=5,  maximum_energy=20		=> bonus_damage=0
	*	Robot Note:
	*	The bonus damage formula should be computed using double arithmetic, and only
	*	the final result should be cast into an integer.
	
	    Return true if the ability was used; false otherwise
	*/
	
	if(current_energy > ROBOT_ABILITY_COST){
		bonus_damage = strength*pow(current_energy/max_energy,4);
		current_energy = current_energy - ROBOT_ABILITY_COST;
	    return true;	
	}
	return false;
}