#ifndef Vistor_h
#define Visitor_h
#include <iostream>
using namespace std;

class Visitor{

private:
string visitorName;
int ticketsBought;

public:

Visitor();

Visitor(string visitorName, int ticketsBought);

~Visitor();

void displayInfo();

void setVisitorName(string visitorName);
string getVisitorName();

void setTicketsBought(int ticketsBought);
int getTicketsBought();




};
#endif
