#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


//animal 
Animal::Animal() : name(""), age(0), isHungry(NULL){}
Animal::Animal(string name,int age,bool isHungry) : name(name),age(age),isHungry(false){}
Animal::~Animal(){}

void Animal::setName(string name){this->name = name;}
string Animal::getName(){return name;}

void Animal::setAge(int age){this->age = age;}
int Animal::getAge(){return age;}

void Animal::setIsHungry(bool isHungry){this->isHungry=isHungry;}
bool Animal::getIsHungry(){return isHungry;}


void Animal::feed(){
    if(getIsHungry() == true){
        cout<<"Animal is fed."<<endl;
    } else{
        cout<<"Hungry"<<endl;
    }
}

void Animal::display(){
cout<<"Name: "<<getName()<<endl; 
cout<<"Age: "<<getAge()<<endl;
cout<<"Hunger: "<<getIsHungry()<<endl;

}
//mammal

Mammal::Mammal() : Animal(),furColor(""){}
Mammal::Mammal(string name,int age,bool isHungry,string furColor): Animal(name,age,isHungry),furColor(furColor){}
Mammal::~Mammal(){}

void Mammal::setFurColor(string furColor){this-> furColor= furColor;}
string Mammal::getFurColor(){return furColor;}

void Mammal::display(){
    cout<<"Fur Color: "<<furColor<<endl;
}
void Mammal::feed(){
    if(getIsHungry() == true){
        cout<<"Animal is fed."<<endl;
    } else{
        cout<<"Hungry"<<endl;
    }
}

//bird


Bird::Bird() : Animal(),wingspan(0){}
Bird::Bird(string name,int age,bool isHungry,float wingspan): Animal(name,age,isHungry),wingspan(wingspan){}
Bird::~Bird(){}

void Bird::setWingspan(float wingspan){this-> wingspan= wingspan;}
float Bird::getWingspan(){return wingspan;}

void Bird::display(){
    cout<<"Wingspan: "<<wingspan<<endl;
}
void Bird::feed(){
    if(getIsHungry() == true){
        cout<<"Animal is fed."<<endl;
    } else{
        cout<<"Hungry"<<endl;
    }
}

//Reptile


Reptile::Reptile() : Animal(),isVenomous(NULL){}
Reptile::Reptile(string name,int age,bool isHungry,bool isVenomous): Animal(name,age,isHungry),isVenomous(isVenomous){}
Reptile::~Reptile(){}

void Reptile::setIsVenomous(bool isVenomous){this-> isVenomous= isVenomous;}
bool Reptile::getIsVenomous(){return isVenomous;}

void Reptile::display(){
    cout<<"is Venomous: "<<isVenomous<<endl;
}
void Reptile::feed(){
    if(getIsHungry() == true){
        cout<<"Animal is fed."<<endl;
    } else{
        cout<<"Hungry"<<endl;
    }
}

//enclosure

Enclosure::Enclosure():capacity(0),currentCount(0),animals(nullptr){}
Enclosure::Enclosure(Animal* animals, int capacity, int currentCount): capacity(capacity),currentCount(currentCount)[
    animals = new Animal[max]
]
Enclosure::~Enclosure(){
    delete[] animals;
}

void Enclosure::addAnimal(const Animal& a){
if(currentCount<capacity){
    animals[currentCount] = a;
    currentCount++;
} else{
    cout<<"Full!";
  }
}
void Enclosure::displayAnimals(){
    for(int i=0;i<capacity;i++){
    cout<<"Enclosure Animals 1:"<<endl;
    cout<<animals[i].getAge()<<animals[i].getIsHungry()<<endl;

}
}

void Enclosure::setCapacity(int capacity){this->capacity = capacity;}
int Enclosure::getCapacity(){return capacity;}

void Enclosure::setCurrentCount(int currentCount){this->currentCount=currentCount;}
int Enclosure::getCurrentCount(){return currentCount;}


//visitor
Visitor::Visitor() : visitorName(" "), ticketsBought(0){}
Visitor::Visitor(string visitorName, int ticketsBought) : visitorName(visitorName), ticketsBought(ticketsBought){}
Visitor::~Visitor(){}
void Visitor:: setVisitorName(string visitorName){this->visitorName=visitorName;}
string Visitor:: getVisitorName(){return visitorName;}
void Visitor:: setTicketsBought(int ticketsBought){this->ticketsBought=ticketsBought;}
int Visitor::getTicketsBought(){return ticketsBought;}
void Visitor::displayInfo(){
    cout<<"Visiot Info: "<<endl;
    cout<<"Visior name: "<<getVisitorName()<<endl;
    cout<<"Tickets Bought: "<<getTicketsBought()<<endl;
}

int main() {
    Mammal lion("Lion", 5, true, "Golden");
    Bird parrot("Parrot", 2, false, 0.5);
    Reptile snake("Snake", 3, true, true);

    cout << lion.getName() << "age" << lion.getAge() <<endl;
    if(lion.getIsHungry()==true) {
    cout << "hungry" << endl;
    }else{
         cout << "not hungry" << endl;
}
    cout << parrot.getName() << "age:" << parrot.getAge() <<endl;
    if(parrot.getIsHungry()==true){
    cout << "hungry" << endl;
} else {
cout << "not hungry" << endl;
}
    cout << snake.getName() << "age:" << snake.getAge() <<endl;
    if(snake.getIsVenomous()==true){
     cout << " venomous,";
    }else {
    cout << " not venomous,";
    }
    if(snake.getIsHungry()==true){
     cout << "hungry" << endl;
    }
    else{
         cout << "not hungry)" << endl;
    }
    Visitor visitor("sarah ali", 3);
    cout << "Visitor info: " << endl;
    cout << "Name: " << visitor.getVisitorName() << endl;
    cout << "Tickets bought: " << visitor.getTicketsBought() << endl;

    return 0;
}
