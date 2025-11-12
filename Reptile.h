#ifndef Reptile_h
#define Reptile_h
#include "Animal.h"
#include <iostream>
using namespace std;

class Reptile : public Animal{

    private: 
    bool isVenomous;

public: 
Reptile();

Reptile(string name,int age,bool isHungry,bool isVenomous);

~Reptile();

void display() override;
void feed() override;

void setIsVenomous(bool isVenomous);
bool getIsVenomous();



}; 
#endif
