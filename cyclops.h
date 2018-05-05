#ifndef CYCLOPS_H
#define CYCLOPS_H

#include <iostream>
#include "card.h"

using namespace std;

class Cyclops : public Card {
    private:
    	
    	string clopsName;
    	
    	int clopsCost;
    	int clopsbAttack;
    	int clopsDefense;
    	
    	bool clopsExh;
    	
	

    public:
    	Cyclops(string, int, int, int);
    	
    	string getClopsName(void);
        int getClopsCost(void);
        int getClopsAttack(void);
        int getClopsDefense(void);
        bool isClopsExhausted(void);
        void unClopsExhaust(void);
    
    
    virtual string render(int);
};

#endif
