#include "bear.h"

Bear::Bear(string n, int mCost, int cardAttack, int cardDefense) : Card(n, mCost, cardAttack, cardDefense)
{	
}

string Bear::render(int line){
    
    switch(line){
        case 0: return ".___________.";
        case 1: return "|Bear       |";
        case 2: return "|  _^___^_  |";
        case 3: return "| ( 0- -0 ) |";
        case 4: return "|     O     |";
        case 5: return "|           |";
        case 6: return "|  300/100  |";
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
