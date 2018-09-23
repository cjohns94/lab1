#include "Cleric.h"

using namespace std;


Cleric::~Cleric(){
    cout << "In destructor" << endl;
}

int Cleric::getDamage(){
    /*
	*	Cleric:
	*	This value is equal to the Cleric's magic.
	*/
    return magic;
}

void Cleric::takeDamage(int damage){
  
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

void Cleric::reset(){
    
	/*
	*	reset()
	*
	*	Restores a fighter's current hit points to its maximum hit points.
	*	Cleric:
	*	Also restores a Cleric's current mana to its maximum value (which is 5 times its magic).
	*/
	
	//Restore current hp
	current_hit_pts = max_hit_pts;
	
	//Restore mana to max
	current_mana = max_mana;
    
}

void Cleric::regenerate(){
    
	/*
	*	regenerate()
	*
	*	Increases the fighter's current hit points by an amount equal to one sixth of
	*	the fighter's strength.  This method must increase the fighter's current hit
	*	points by at least one.  Do not allow the current hit points to exceed the
	*	maximum hit points.
	*
	*	Cleric:
	*	Also increases a Cleric's current mana by an amount equal to one fifth of the
	*	Cleric's magic.  This method must increase the Cleric's current mana by at
	*	least one.  Do not allow the current mana to exceed the maximum mana (again, 5 times its magic).
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
	
	//find mana increase
	int mana_increase = magic/5;
	
	//Check to make sure increase is at least 1
	if (mana_increase < 1){
	    mana_increase = 1;
	}
	
	//Increase mana
	current_mana = current_mana + mana_increase;
	
	//Check to make sure current_mana doesn't exceed max
	if(current_mana > max_mana){
	    current_mana = max_mana;
	}
    
}

bool Cleric::useAbility(){      //NEED TO IMPLEMENT

	/*
	*	useAbility()
	*
	*	Attempts to perform a special ability based on the type of fighter.  The
	*	fighter will attempt to use this special ability just prior to attacking
	*	every turn.
	*	Cleric: Healing Light
	*	Increases the Cleric's current hit points by an amount equal to one third of its magic.
	*	Can only be used if the Cleric has at least [CLERIC_ABILITY_COST] mana.
	*	Will be used even if the Cleric's current HP is equal to their maximum HP.
	*	Decreases the Cleric's current mana by [CLERIC_ABILITY_COST] when used.
	*	Cleric Note:
	*	This ability, when successful, must increase the Cleric's current hit points
	*	by at least one, unless doing so would given the Cleric more hit points than its maximum hit points.
	*	Do not allow the current hit points to exceed the maximum hit points.
	*
	*	Return true if the ability was used; false otherwise.
	*/
	if(current_mana >= CLERIC_ABILITY_COST){
		int hp_increase = magic/3;
		
		if(hp_increase < 1){
			hp_increase = 1;
		}
		
		current_hit_pts = current_hit_pts + hp_increase;
		
		if(current_hit_pts > max_hit_pts){
			current_hit_pts = max_hit_pts;
		}
		return true;
	}
	return false;
    
}