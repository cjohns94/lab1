#ifndef ROBOT_H
#define ROBOT_H

#include "Fighter.h"

class Robot : public Fighter{
    public:
        Robot();
        ~Robot();
        int getDamage();
        void takeDamage(int damage);
        void reset();
        void regenerate();
        bool useAbility();
        
    private:
};


#endif