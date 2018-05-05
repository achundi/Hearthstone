#ifndef DRAGON_H
#define DRAGON_H

#include <iostream>
#include "card.h"

using namespace std;

class Dragon : public Card {
    private:
    	
    	string dragName;
    	
    	int dragCost;
    	int dragAttack;
    	int dragDefense;
    	
    	bool dragExh;
    	
	

    public:
    	Dragon(string, int, int, int);
    	
    	string getDragName(void);
        int getDragCost(void);
        int getDragAttack(void);
        int getDragDefense(void);
        bool isDragExhausted(void);
        void unDragExhaust(void);
    
    
    virtual string render(int);
};

#endif
