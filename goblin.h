#ifndef GOBLIN_H
#define GOBLIN_H

#include <iostream>
#include "card.h"

using namespace std;

class Goblin : public Card {
    private:
    	
    	string gobName;
    	
    	int gobCost;
    	int gobAttack;
    	int gobDefense;
    	
    	bool gobExh;
    	
	

    public:
    	Goblin(string, int, int, int);
    	
    	string getGobName(void);
        int getGobCost(void);
        int getGobAttack(void);
        int getGobDefense(void);
        bool isGobExhausted(void);
        void unGobExhaust(void);
    
    
    virtual string render(int);
};

#endif
