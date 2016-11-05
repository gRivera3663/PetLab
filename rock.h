// rock.h

#ifndef rock_h
#define rock_h

#include"pet.h"

using namespace std;

class Pet;

class Rock: public Pet
{
private:
    int hardness;
    string clevage;
    int color;
    string ChemicalComp;
};

// Subclasses

class Fornacite: public Rock
{
    void virtual action() {cout << "action" << endl;}
};

class Fukalite: public Rock
{
    void virtual action() {cout << "action" << endl;}
};

class Cummingtonite: public Rock
{
    void virtual action() {cout << "action" << endl;}
};

#endif
