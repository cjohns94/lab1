#ifndef FIGHTER_H
#define FIGHTER_H

#include "FighterInterface.h"
#include <string>

using namespace std;

class Fighter : public FighterInterface{
    public:
        Fighter(string fighter_name, int fighter_max_hit_pts, int fighter_strength, int fighter_speed, int fighter_magic);
        ~Fighter();
        std::string getName() const;
        int getMaximumHP() const;
        int getCurrentHP() const;       //Does this function go here or in the subclasses?
        int getStrength() const;
        int getSpeed() const;
        int getMagic() const;
        virtual int getDamage() = 0;
        virtual void takeDamage(int damage) = 0;
        virtual void reset() = 0;
        virtual void regenerate() = 0;
        virtual bool useAbility() = 0;
        
    protected:
        std::string name;
        char type;
        int max_hit_pts;
        double strength;
        int speed;
        int magic;
        std::string info;
        int current_hit_pts;
        int current_speed;

};

#endif