// plant.h

#ifndef plant_h
#define plant_h

#include"pet.h"

using namespace std;

class Pet;

class Plant: public Pet
{
private:
    int greenness; // 1-50
};

// Subclasses

class Fern: public Plant
{
public:
    void fernicate()
    {
        cout << "(fern noises)" << endl;
    }
    void virtual action() {cout << "action" << endl;}
};

class Cactus: public Plant
{
public:
    void poke()
    {
        cout << "Poke." << endl;
    }
    void virtual action() {cout << "action" << endl;}
};

#endif
