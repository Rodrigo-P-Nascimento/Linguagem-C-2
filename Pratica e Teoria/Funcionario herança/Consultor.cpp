#include "Consultor.hpp"  

float Consultor::getSalario(){
    return (salario + (salario*0.1));
}
float Consultor::getSalario(float percentual){
    return (salario + (salario*percentual));
}

Consultor::Consultor()
{
	
}
	