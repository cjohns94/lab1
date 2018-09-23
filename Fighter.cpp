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
    
    current_hit_pts = max_hit_pts;
    current_speed = speed;

    //cout << "In Fighter.cpp constructor" << endl;
}

Fighter::~Fighter(){
    cout << "In Fighter.cpp destructor" << endl;
}

string Fighter::getName() const{
    //cout << "In Fighter getName" << endl;
    return name;
}

int Fighter::getMaximumHP() const{
    //cout << "In Fighter getMaxHP" << endl;
    return max_hit_pts;
}

int Fighter::getCurrentHP() const{
    //cout << "In Fighter getCurrentHP" << endl;
    return current_hit_pts;
}

int Fighter::getStrength()const{
    //cout << "In Fighter getStrength" << endl;
    return strength;
}

int Fighter::getSpeed()const{
    //cout << "In Fighter getSpeed" << endl;
    return current_speed;
}

int Fighter::getMagic()const{
    //cout << "In Fighter getMagic" << endl;
    return magic;
}