#include "Dragon.h"

Dragon::Dragon(string n, int mCost, int cardAttack, int cardDefense) : Card(n, mCost, cardAttack, cardDefense)
{	
}

string Dragon::render(int line){
    
    switch(line){
        case 0: return ".___________.";
        case 1: return "|Goblin     |";
        case 2: return "| __M---M__ |";
        case 3: return "| |(0) (0)| |";
        case 4: return "| |  |M|  | |";
        case 5: return "| ____^____ |";
        case 6: return "|  1000/600 |";
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
