#include "card.h"

using namespace std;
//Constructor
Card::Card(string card_name, int mana_cost, int defense_value, int attack_value){
	name = card_name;
	manaCost = mana_cost;
	defense = defense_value;
	attack = attack_value;
}
//Print Card Constructor
string Card::render(int line) {
    switch(line){
        case 0: return ".___________.";
        case 1: return "|           |";
        case 2: return "|           |";
        case 3: return "|           |";
        case 4: return "|           |";
        case 5: return "|           |";
        case 6: return "|           |";
        case 7: return "|___________|";
        default:
                return " ";
    }
}
//Get Name Function
string Card::getName(void) {
	return name;
}
//Mana Cost of Card Function
int Card::getManaCost(void) {
	return manaCost;
}
//Attack Function
int Card::getAttack(void) {
	return attack;
}
//Defence Function
int Card::getDefense(void) {
	return defense;
}
//isExhausted Function
bool Card::isExhausted(void) {
	return exhausted;
}
//Exhaust Function
void Card::exhaust(void) {
	exhausted = true;
}
//UnExhausted Function
void Card::unExhaust(void) {
	exhausted = false;
}
