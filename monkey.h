#ifndef MONKEY_H
#define MONKEY_H

#include <iostream>
#include "card.h"

using namespace std;

class Monkey : public Card {
    private:
    	
    	string monkName;
    	
    	int monkCost;
    	int monkAttack;
    	int monkDefense;
    	
    	bool monkExh;
    	
	

    public:
    	Monkey(string, int, int, int);
    	
    	string getMonkName(void);
        int getMonkCost(void);
        int getMonkAttack(void);
        int getMonkDefense(void);
        bool isMonkExhausted(void);
        void unMonkExhaust(void);
    
    
    virtual string render(int);
};

#endif
