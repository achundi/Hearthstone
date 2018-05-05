#ifndef LION_H
#define LION_H

#include <iostream>
#include "card.h"

using namespace std;

class Lion : public Card {
    private:
    	
    	string lionName;
    	
    	int lionCost;
    	int lionAttack;
    	int lionDefense;
    	
    	bool lionExh;
    	
	

    public:
    	Lion(string, int, int, int);
    	
    	string getLionName(void);
        int getLionCost(void);
        int getLionAttack(void);
        int getLionDefense(void);
        bool isLionExhausted(void);
        void unLionExhaust(void);
    
    
    virtual string render(int);
};

#endif
