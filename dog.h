#ifndef DOG_H
#define DOG_H

#include <iostream>
#include "card.h"

using namespace std;

class Dog : public Card {
    private:
    	
    	string dogName;
    	
    	int dogCost;
    	int dogAttack;
    	int dogDefense;
    	
    	bool dogExh;
    	
	

    public:
    	Dog(string, int, int, int);
    	
    	string getDogName(void);
        int getDogCost(void);
        int getDogAttack(void);
        int getDogDefense(void);
        bool isDogExhausted(void);
        void unDogExhaust(void);
    
    
    virtual string render(int);
};

#endif
