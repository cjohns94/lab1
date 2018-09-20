#ifndef ROBOT_H
#define ROBOT_H

#include "Fighter.h"

class Robot : public Fighter{
    public:
        Robot():Fighter(fighter_info){
            max_energy = 2*magic;
        };
        /*  The member initializer list above can only be used in constructor
        *   definition. A robot is contructed by calling the fighter constructor.
        */
        ~Robot();
        int getDamage();
        void takeDamage(int damage);
        void reset();
        void regenerate();
        bool useAbility();
        
    private:
        int max_energy;
        int current_energy;
        int bonus_damage;
};


#endif