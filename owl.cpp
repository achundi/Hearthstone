#include "owl.h"

Owl::Owl(string n, int mCost, int cardAttack, int cardDefense) : Card(n, mCost, cardAttack, cardDefense)
{	
}

string Owl::render(int line){
    
    switch(line){
        case 0: return ".___________.";
        case 1: return "|Owl        |";
        case 2: return "|   m___m   |";
        case 3: return "|  ( 0 0 )  |";
        case 4: return "|  |  >  |  |";
        case 5: return "|    V V    |";
        case 6: return "|  100/200  |";
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
