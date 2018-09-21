#include "Fighter.h"
#include <sstream>

using namespace std;

Fighter::Fighter(string name, int max_hit_pts, int strength, int speed, int magic){

    //this -> overallnum = localnum; dont have to rename everything.
    this->name = name;
    this->max_hit_pts = max_hit_pts;
    this->strength = strength;
    this->speed = speed;
    this->magic = magic;

    //cout << "In Fighter.cpp constructor" << endl;
}

Fighter::~Fighter(){
    cout << "In Fighter.cpp destructor" << endl;
}

string Fighter::getName() const{
    return "pizza";
}

int Fighter::getMaximumHP() const{
    return 0;
}

int Fighter::getCurrentHP()const{
    return 0;
}

int Fighter::getStrength()const{
    return 0;
}

int Fighter::getSpeed()const{
    return 0;
}

int Fighter::getMagic()const{
    return 0;
}