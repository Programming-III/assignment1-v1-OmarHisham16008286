#ifndef Mammal_h
#define Mammal_h
#include "Animal.h"
#include <iostream>
using namespace std;

class Mammal : public Animal{

    private: 
    string furColor;

public: 
Mammal();

Mammal(string name,int age,bool isHungry,string furColor);

~Mammal();

void display() override;
void feed() override;

void setFurColor(string furColor);
string getFurColor();



}; 
#endif
