#ifndef BEAR_H
#define BEAR_H

#include <iostream>
#include "card.h"

using namespace std;

class Bear : public Card {
    private:
    	
    	string bearName;
    	
    	int bearCost;
    	int bearAttack;
    	int bearDefense;
    	
    	bool bearExh;
    	
	

    public:
    	Bear(string, int, int, int);
    	
    	string getBearName(void);
        int getBearCost(void);
        int getBearAttack(void);
        int getBearDefense(void);
        bool isBearExhausted(void);
        void unBearExhaust(void);
    
    
    virtual string render(int);
};

#endif
