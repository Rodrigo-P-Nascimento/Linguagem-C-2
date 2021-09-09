#include "Cliente.h"
#include <iostream>

Cliente::Cliente(){
}

Cliente::Cliente(int cod){
    codigo = cod;
}

Cliente::Cliente(int cod, std::string n){
    codigo = cod;
    nome = n;
}

Cliente::~Cliente(){
}
