#include "rabbit.h"
//Constructor
Rabbit::Rabbit(void):Card("Rabbit", 7, 800, 100){
};
//Virtual Render
string Rabbit::render(int line){
    
    switch(line){
        case 0: return ".___________.";
        case 1: return "|Mage Rabbit|";
        case 2: return "|   (|_|)   |";
        case 3: return "|   ('X')   |";
        case 4: return "|  C(^)(^)  |";
        case 5: return "|           |";
        case 6: return "|  800/100  |";
        case 7: return "|___________|";
        default:
            return " ";
    }
}
