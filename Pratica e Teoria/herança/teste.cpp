#include <iostream>
#include "Veiculo.h"
#include "Veiculo.cpp"
#include "Conversivel.h"
#include "Conversivel.cpp"

using namespace std;

int main(){

    Veiculo v1 = Veiculo("Corsa", "Preto", 2010);
	v1.acelerar(); // ok!
	v1.frear();// ok!
	
    Conversivel * c1 = new Conversivel ("KA", "Preto",2009);

	c1->subirTeto (); // ok!
	c1->descerTeto (); // ok!
	c1->acelerar (); // e agora?
 	c1->frear(); // e agora? 