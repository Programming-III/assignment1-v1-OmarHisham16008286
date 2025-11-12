#ifndef Bird_h
#define Bird_h
#include "Animal.h"
#include <iostream>
using namespace std;

class Bird : public Animal{

    private: 
    float wingspan;

public: 
Bird();

Bird(string name,int age,bool isHungry,float wingspan);

~Bird();

void display() override;
void feed() override;

void setWingspan(float wingspan);
float getWingspan();



}; 
#endif
