#ifndef Enclosure_h
#define Enclosure_h
#include "Animal.h"
#include <iostream>
using namespace std;

class Enclosure{

    private: 
    Animal* animals;
    int capacity;
    int currentCount;

public: 
Enclosure();

Enclosure(Animal* animals, int capacity, int currentCount);

~Enclosure();

void addAnimal(const Animal& a);

void displayAnimals();


void setCapacity(int capacity);
int getCapacity();

void setCurrentCount(int currentCount);
int getCurrentCount();


}; 
#endif
