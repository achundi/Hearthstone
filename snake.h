#ifndef SNAKE_H
#define SNAKE_H

#include <iostream>
#include "card.h"

using namespace std;

class Snake : public Card {
    private:
    	
    	string snakeName;
    	
    	int snakeCost;
    	int snakeAttack;
    	int snakeDefense;
    	
    	bool snakeExh;
    	
	

    public:
    	Snake(string, int, int, int);
    	
    	string getSnakeName(void);
        int getSnakeCost(void);
        int getSnakeAttack(void);
        int getSnakeDefense(void);
        bool isSnakeExhausted(void);
        void unSnakeExhaust(void);
    
    
    virtual string render(int);
};

#endif
