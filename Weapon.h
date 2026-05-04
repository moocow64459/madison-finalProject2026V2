#ifndef WEAPON_H
#define WEAPON_H
#include <string>

// did we learn about forward declaration?
class Character;

using namespace std;

class Weapon {
private:
    int damageMin;
    int damageMax;
    string weaponName;
    void setName(const string&);

public:
    Weapon();
    Weapon(const string &);

    virtual ~Weapon() = default;

    virtual void attack(Character&) = 0;
    static int randomDamage(const Weapon&);

    string getName() const;
    int getMinDamage() const;
    int getMaxDamage() const;

    void setMinDamage(int);
    void setMaxDamage(int);

    friend std::ostream& operator<<(std::ostream&, const Weapon&);
};


#endif //WEAPON_H