#include "Arena.h"
#include <sstream>


using namespace std;


bool Arena::addFighter(std::string info){
	/*
	*	addFighter(string)
	*
	*	Adds a new fighter to the collection of fighters in the arena. Do not allow
	*	duplicate names.  Reject any string that does not adhere to the format
	*	outlined in the lab specs.
	*
	*	Return true if a new fighter was added; false otherwise.
	*/	
	
	//Define input vars
    std::string name;
    char type;
    int max_hit_pts;
    int strength;
    int speed;
    int magic;
    
    //Put input vars into stringstream to parse
	stringstream fighter(info);
	    
    fighter >> name;
    fighter >> type;
    fighter >> max_hit_pts;
	fighter >> strength;
    fighter >> speed;
    fighter >> magic;
    

	//Check to make sure input has right amount and type
	//if(info >> name >> type >> max_hit_pts >> strength >> speed >> magic){

		if(type == 'R'){
			//Create a new robot object pointer
			cout << "Adding robot" << endl;
			fighter_vector.push_back(new Robot(name,max_hit_pts,strength,speed,magic));	//Adds robot object pointer
		}else if (type == 'C'){
			cout << "Adding Cleric" << endl;
			fighter_vector.push_back(new Cleric(name,max_hit_pts,strength,speed,magic));	//Adds robot object pointer	
		}else if (type == 'A'){
			cout << "Adding Archer" << endl;
			fighter_vector.push_back(new Archer(name,max_hit_pts,strength,speed,magic));	//Adds robot object pointer	
		}
		return true;
//	}
  //  return false;		//invalid input
}

    
bool Arena::removeFighter(std::string name){
	/*
	*	removeFighter(string)
	*
	*	Removes the fighter whose name is equal to the given name.  Does nothing if
	*	no fighter is found with the given name.
	*
	*	Return true if a fighter is removed; false otherwise.
	*/
	
	//Run through the fighter vector 
	for (int i = 0; i < fighter_vector.size(); i++){
		//And find a name that matches the given name
		if(fighter_vector.at(i)->getName() == name){
			//And erase it
			fighter_vector.erase(fighter_vector.begin() + i); //-------------------------------------------Why do I need to use vector.begin()?
			return true;
		}
	}
    return false;
}
    
FighterInterface* Arena::getFighter(std::string name){ //How does the pointer work?
	/*
	*	getFighter(string)
	*
	*	Returns the memory address of a fighter whose name is equal to the given
	*	name.  Returns NULL if no fighter is found with the given name.
	*
	*	Return a memory address if a fighter is found; NULL otherwise.
	*   
	*/
	for(Fighter* locator : fighter_vector){
		if (locator->getName() == name){
			return locator;
		}
		
	}
	return NULL;
}
    
int Arena::getSize() const{
	/*
	*	getSize()
	*
	*	Returns the number of fighters in the arena.
	*
	*	Return a non-negative integer.
	*/
	
	return fighter_vector.size();
    
}