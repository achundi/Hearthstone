#include "Snake.h"

Snake::Snake(string n, int mCost, int cardAttack, int cardDefense) : Card(n, mCost, cardAttack, cardDefense)
{	
}

string Snake::render(int line){
    
    switch(line){
        case 0: return ".___________.";
        case 1: return "|Snake      |";
        case 2: return "|   _____   |";
        case 3: return "|  | l l |  |";
        case 4: return "|  (_~~~_)  |";
        case 5: return "|           |";
        case 6: return "|  200/200  |";
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
