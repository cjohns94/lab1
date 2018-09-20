#ifndef CLERIC_H
#define CLERIC_H

#include "Fighter.h"

class Cleric : public Fighter{
    public:
        Cleric():Fighter(fighter_info){
            max_mana = 5*magic;
        };
        ~Cleric();
        int getDamage();
        void takeDamage(int damage);
        void reset();
        void regenerate();
        bool useAbility();
        
    private:
        int current_mana;
        int max_mana;
};


#endif