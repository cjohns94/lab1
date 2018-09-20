#include "Fighter.h"

using namespace std;

Fighter::Fighter(){
    cout << "In constructor" << endl;
}

Fighter::~Fighter(){
    cout << "In destructor" << endl;
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