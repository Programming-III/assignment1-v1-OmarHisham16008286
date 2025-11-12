#ifndef Animal_h
#define Animal_h
#include <iostream>
using namespace std;

class Animal{

    private: 
    string name;
    int age; 
    bool isHungry;
    
    public:
    Animal();
    Animal(string name,int age,bool isHungry);

    virtual ~Animal();

    virtual void display();
    virtual void feed();

void setName(string name);
string getName();

void setAge(int age);
int getAge();

void setIsHungry(bool isHungry);
bool getIsHungry() ;






}; 
#endif
