#ifndef ARENA_H_
#define ARENA_H_

#include "ArenaInterface.h"
#include "FighterInterface.h"
#include "Fighter.h"
#include "Robot.h"
#include "Cleric.h"
#include "Archer.h"
#include <vector>
#include <string>

using namespace std;
/*
* Syntax for defining a derived class:
*
* class derived_class : public base class{...}
* The derived_class inherits member functions and data from base_class
*/


//Arena class is a collection of fighters with unique names.
class Arena : public ArenaInterface{  //create a class that inherits from FighterInterface
    protected:
        std::vector<Fighter*> fighter_vector;      //vector of fighter pointers


    public:
        /*
        * In public, a constructor is needed. This is called automatically
        * whenever a new Arena object is created to initialize everything. 
        */
        Arena() {}//Default constructor??
        ~Arena() {} //What do these do = Destructor

        
        /* 
        * Since all member functions in ArenaInterface are virtual,
        * this allows the derived class to redefince the function.
        * See http://www.cplusplus.com/doc/tutorial/polymorphism/
        */
        
        bool addFighter(std::string info);
        
        bool removeFighter(std::string name);
        
        FighterInterface* getFighter(std::string name); //How does the pointer work?
        
        int getSize() const;
        
    
};
#endif /*ARENA_H_*/