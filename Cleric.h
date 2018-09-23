#ifndef CLERIC_H
#define CLERIC_H

#include "Fighter.h"

class Cleric : public Fighter{
    public:
        Cleric(string name, int max_hit_pts, int strength, int speed, int magic):Fighter(name,max_hit_pts,strength,speed,magic){
            max_mana = 5*magic;
            current_mana = max_mana;
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