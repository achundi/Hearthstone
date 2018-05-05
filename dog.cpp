#include "dog.h"

Dog::Dog(string n, int mCost, int cardAttack, int cardDefense) : Card(n, mCost, cardAttack, cardDefense)
{	
}

string Dog::render(int line){
    
    switch(line){
        case 0: return ".___________.";
        case 1: return "|Dog _   _  |";
        case 2: return "|   | |_| | |";
        case 3: return "|   ( O O ) |";
        case 4: return "|   |(---)| |";
        case 5: return "|           |";
        case 6: return "|  400/300  |";
        case 7: return "|___________|";
        default:
            return " ";
    }
}

/*
string Goblin::getGobName(){

	//std::string gName = "Goblin";
return gName;
}

int Goblin::getGobCost(void){

	//int gCost=1;
	
return gcost;
}

int Goblin::getGobAttack(void){

	//int gAttack=200;
	
return gAttack;

}

int Goblin::getGobDefense(void){

	//int gDefense=100;
	
return gDefense;
}


bool Goblin::isGobExhausted(void){

	bool gExh=false;
	
return gcost;
}

void Goblin::unGobExhaust(bool gExhCondition){
	bool gExh = gExhCondition;
}
*/
