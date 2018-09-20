#ifndef ARCHER_H
#define ARCHER_H

#include "Fighter.h"

class Archer : public Fighter{
    public:
        Archer():Fighter(fighter_info){
            current_speed = speed;
            current_hit_pts = max_hit_pts;
        };
        ~Archer();
        int getDamage();
        void takeDamage(int damage);
        void reset();
        void regenerate();
        bool useAbility();
        
    private:
        int current_hit_pts;
        int current_speed;
};


#endif