#ifndef ROBOT_H
#define ROBOT_H

#include "Fighter.h"

class Robot : public Fighter{
    public:
        Robot(string name, int max_hit_pts, int strength, int speed, int magic):Fighter(name,max_hit_pts,strength,speed,magic){
            
            max_energy = 2*magic;
            bonus_damage = 0;
            current_energy = max_energy;
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
        double max_energy;
        double current_energy;
        int bonus_damage;
};


#endif