#include "Robot.h"

using namespace std;

Robot::Robot(){
  cout << "In constructor" << endl; 
}

Robot::~Robot(){
    cout << "In destructor" << endl;
}

int Robot::getDamage(){
    return 0;
}

void Robot::takeDamage(int damage){
    
}

void Robot::reset(){
    
}

void Robot::regenerate(){
    
}

bool Robot::useAbility(){
    return true;
}