#include "Conversivel.h"  

Conversivel::Conversivel(std::string n, std::string c, int a) 
    : Veiculo(n, c, a){
	teto = false;
}

void Conversivel::subirTeto(){
	teto = true;
}
void Conversivel::descerTeto(){
	teto = false;
}