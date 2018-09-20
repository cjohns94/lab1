#include "Fighter.h"
#include <sstream>

using namespace std;

Fighter::Fighter(string fighter_info){
    stringstream fighter(fighter_info);
    
    fighter >> name;
    fighter >> type;
    fighter >> max_hit_pts;
    fighter >> strength;
    fighter >> speed;
    fighter >> magic;
    
    cout << "In Fighter.cpp constructor" << endl;
    cout << "Fighter entered:" << endl;
    cout << name << endl << type << endl << max_hit_pts << endl << strength << endl << speed << endl << magic << endl;
}

Fighter::~Fighter(){
    cout << "In Fighter.cpp destructor" << endl;
}

string Fighter::getName(){
    return "pizza";
}

int Fighter::getMaximumHP(){
    return 0;
}

int Fighter::getCurrentHP(){
    return 0;
}

int Fighter::getStrength(){
    return 0;
}

int Fighter::getSpeed(){
    return 0;
}

int Fighter::getMagic(){
    return 0;
}