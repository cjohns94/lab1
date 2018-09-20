#ifndef CLERIC_H
#define CLERIC_H

#include "Fighter.h"

class Cleric : public Fighter{
    public:
        Cleric();
        ~Cleric();
        int getDamage();
        void takeDamage(int damage);
        void reset();
        void regenerate();
        bool useAbility();
        
    private:
};


#endif