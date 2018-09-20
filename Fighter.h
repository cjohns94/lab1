#ifndef FIGHTER_H
#define FIGHTER_H

#include "FighterInterface.h"

class Fighter : public FighterInterface{
    public:
        Fighter();
        ~Fighter();
        std::string getName();
        int getMaximumHP();
        int getCurrentHP();
        int getStrength();
        int getSpeed();
        int getMagic();
        
    private:
};

#endif