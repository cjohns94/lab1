#ifndef ARCHER_H
#define ARCHER_H

#include "Fighter.h"

class Archer : public Fighter{
    public:
        Archer(string name, int max_hit_pts, int strength, int speed, int magic):Fighter(name,max_hit_pts,strength,speed,magic){};
        ~Archer();
        int getDamage();
        void takeDamage(int damage);
        void reset();
        void regenerate();
        bool useAbility();
};


#endif