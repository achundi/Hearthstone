#ifndef OWL_H
#define OWL_H

#include <iostream>
#include "card.h"

using namespace std;

class Owl : public Card {
    private:
    	
    	string owlName;
    	
    	int owlCost;
    	int owlAttack;
    	int owlDefense;
    	
    	bool owlExh;
    	
	

    public:
    	Owl(string, int, int, int);
    	
    	string getOwlName(void);
        int getOwlCost(void);
        int getOwlAttack(void);
        int getOwlDefense(void);
        bool isOwlExhausted(void);
        void unOwlExhaust(void);
    
    
    virtual string render(int);
};

#endif
