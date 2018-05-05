#include "lion.h"

Lion::Lion(string n, int mCost, int cardAttack, int cardDefense) : Card(n, mCost, cardAttack, cardDefense)
{	
}

string Lion::render(int line){
    
    switch(line){
        case 0: return ".___________.";
        case 1: return "|Lion       |";
        case 2: return "|  ^^---^^  |";
        case 3: return "| (  0 0  ) |";
        case 4: return "|  (  -  )  |"; 
        case 5: return "|   (v-v)   |";
        case 6: return "|  600/400  |";
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
