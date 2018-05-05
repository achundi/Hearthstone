#include "cyclops.h"

Cyclops::Cyclops(string n, int mCost, int cardAttack, int cardDefense) : Card(n, mCost, cardAttack, cardDefense)
{	
}

string Cyclops::render(int line){
    
    switch(line){
        case 0: return ".___________.";
        case 1: return "|Cyclops    |";
        case 2: return "|   _____   |";
        case 3: return "|  | -O- |  |";
        case 4: return "|  | lll |  |";
        case 5: return "|           |";
        case 6: return "|  600/300  |";
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
