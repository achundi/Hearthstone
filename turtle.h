#ifndef TURTLE_H
#define TURTLE_H

#include <iostream>
#include "card.h"

using namespace std;

class Turtle : public Card {
    private:
    	
    	string turtleName;
    	
    	int turtleCost;
    	int turtleAttack;
    	int turtleDefense;
    	
    	bool turtleExh;
    	
	

    public:
    	Turtle(string, int, int, int);
    	
    	string getTurtleName(void);
        int getTurtleCost(void);
        int getTurtleAttack(void);
        int getTurtleDefense(void);
        bool isTurtleExhausted(void);
        void unTurtleExhaust(void);
    
    
    virtual string render(int);
};

#endif
