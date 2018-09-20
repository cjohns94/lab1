#include "Archer.h"

using namespace std;


Archer::~Archer(){
    cout << "In destructor" << endl;
}

int Archer::getDamage(){
    return 0;
}

void Archer::takeDamage(int damage){
    
}

void Archer::reset(){
    
}

void Archer::regenerate(){
    
}

bool Archer::useAbility(){
    return true;
}