#ifndef FIGHTER_H
#define FIGHTER_H

#include "FighterInterface.h"
#include <string>


class Fighter : public FighterInterface{
    public:
        Fighter(std::string fighter_info);
        ~Fighter();
        std::string getName();
        int getMaximumHP();
        int getCurrentHP();
        int getStrength();
        int getSpeed();
        int getMagic();
        
    protected:
        std::string name;
        char type;
        int max_hit_pts;
        int strength;
        int speed;
        int magic;
        std::string fighter_info;
};

#endif