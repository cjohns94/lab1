#include "Cleric.h"

using namespace std;

Cleric::Cleric(){
    cout << "In constructor" << endl;
}

Cleric::~Cleric(){
    cout << "In destructor" << endl;
}

int Cleric::getDamage(){
    return 0;
}

void Cleric::takeDamage(int damage){
    
}

void Cleric::reset(){
    
}

void Cleric::regenerate(){
    
}

bool Cleric::useAbility(){
    return true;
}