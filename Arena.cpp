#include "Arena.h"
#include <sstream>


using namespace std;

/*
Arena::Arena(){
    cout << "In arena constructor" << endl;
}

Arena::~Arena(){
    cout << "In arena destructor" << endl;
}
*/

bool Arena::addFighter(std::string info){
	
    std::string name;
    char type;
    int max_hit_pts;
    int strength;
    int speed;
    int magic;

	stringstream fighter(info);
    
    fighter >> name;
    fighter >> type;
    fighter >> max_hit_pts;
    fighter >> strength;
    fighter >> speed;
    fighter >> magic;
    
	/*
	*	addFighter(string)
	*
	*	Adds a new fighter to the collection of fighters in the arena. Do not allow
	*	duplicate names.  Reject any string that does not adhere to the format
	*	outlined in the lab specs.
	*
	*	Return true if a new fighter was added; false otherwise.
	*/
	//Robot* new_fighter = new Robot();		//Create a new robot object pointer
	//fighter_vector.push_back(new_fighter);	//Adds robot object pointer
	if(type == 'R'){
		//Create a new robot object pointer
		fighter_vector.push_back(new Robot(name,max_hit_pts,strength,speed,magic));	//Adds robot object pointer
	}else if (type == 'C'){
		//Robot* new_fighter = new Robot();		//Create a new robot object pointer
		//fighter_vector.push_back(new_fighter);	//Adds robot object pointer		
	}else if (type == 'A'){
		//Robot* new_fighter = new Robot();		//Create a new robot object pointer
		//fighter_vector.push_back(new_fighter);	//Adds robot object pointer		
	}
	
    return true;
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
    return true;
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
	
	return 0;
    
}