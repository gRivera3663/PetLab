// animal.h

#ifndef animal_h
#define animal_h

#include"pet.h"

using namespace std;

class Pet;

class Animal: public Pet
{
private:
    char gender;
    bool type; // Indoor or Outdoor?
};

// Subclasses

class Cat: public Animal
{
public:
    void back_shit_off_table()
    {
        cout << "Maintains eye contact. Asserts dominance." << endl;
    }
    void virtual action() {cout << "action" << endl;}
};

class Dog: public Animal
{
public:
    void eat_poop()
    {
        cout << "Yum." << endl;
    }
    void virtual action() {cout << "action" << endl;}
};

class Snake: public Animal
{
public:
    void snek()
    {
        cout << "snek snek snek" << endl;
    }
    void virtual action() {cout << "action" << endl;}
};

#endif
