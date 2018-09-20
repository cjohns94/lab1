#ifndef ARCHER_H
#define ARCHER_H

#include "Fighter.h"

class Archer : public Fighter{
    public:
        Archer();
        ~Archer();
        int getDamage();
        void takeDamage(int damage);
        void reset();
        void regenerate();
        bool useAbility();
        
    private:
};


#endif