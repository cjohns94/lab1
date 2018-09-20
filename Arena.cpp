#include "Arena.h"
#include <sstream>

using namespace std;

Arena::Arena(){
    cout << "In arena constructor" << endl;
}

Arena::~Arena(){
    cout << "In arena destructor" << endl;
}

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