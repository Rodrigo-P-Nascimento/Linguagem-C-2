#include <iostream>

using namespace std;

class FiguraGeometrica{
protected:
    string nome;
    int tipo;
public:
    virtual float calcularArea()=0; 
    virtual void lerAtributosArea()=0;
    string getNome();
    FiguraGeometrica();
    FiguraGeometrica(int tipo);
};
// ___ Metodos ___
string FiguraGeometrica::getNome(){
    return nome;
}
FiguraGeometrica::FiguraGeometrica(int tipo){
    this->tipo = tipo;
}
FiguraGeometrica::FiguraGeometrica(){
}//End class FiguraGeometrica

//Declarando as classes filhas da classe mãe FigurasGeometricas
class Quadrado : public FiguraGeometrica{
private:
    float lado;
public:
    Quadrado(int tipo);
    float calcularArea();
    void lerAtributosArea();
};

Quadrado::Quadrado(int tipo) : FiguraGeometrica(tipo){
    nome = "Quadrado";
}
float Quadrado::calcularArea(){
    return lado*lado;
}
void Quadrado::lerAtributosArea(){
    cin >> lado;
}

class Retangulo : public FiguraGeometrica{
private:
    float lado1, lado2;
public:
    Retangulo(int tipo);
    float calcularArea();
    void lerAtributosArea();
};

Retangulo::Retangulo(int tipo) : FiguraGeometrica(tipo){
    nome = "Retângulo";
}
float Retangulo::calcularArea(){
    return lado1*lado2;
}
void Retangulo::lerAtributosArea(){
    cin >> lado1 >> lado2;
}

class Triangulo : public FiguraGeometrica{
private:
    float base, altura;
public:
    Triangulo(int tipo);
    float calcularArea();
    void lerAtributosArea();
};

Triangulo::Triangulo(int tipo) : FiguraGeometrica(tipo){
    nome = "Triângulo";
}
float Triangulo::calcularArea(){
    return (altura*base) / 2;
}
void Triangulo::lerAtributosArea(){
    cin >> altura >> base;
}

class Circulo : public FiguraGeometrica{
private:
    float raio;
public:
    Circulo(int tipo);
    float calcularArea();
    void lerAtributosArea();
};

float Circulo::calcularArea(){
    return (raio*raio) * 3.14;
}
void Circulo::lerAtributosArea(){
    cin >> raio;
}
Circulo::Circulo(int tipo) : FiguraGeometrica(tipo){
    nome = "Círculo";
}//Fim da declaração das classes filhas

int main(){

    int tipo=1;
    FiguraGeometrica * figura;

    while (tipo){
        cin >> tipo;
        
        if(tipo == 1){
            figura = new Quadrado(tipo);
            figura->lerAtributosArea();
            cout << figura->getNome() << " polimórfico de área " << figura->calcularArea() << endl;
        }else if(tipo == 2){
            figura = new Retangulo(tipo);
            figura->lerAtributosArea();
            cout << figura->getNome() << " polimórfico de área " << figura->calcularArea() << endl;
        }else if(tipo == 3){
            figura = new Triangulo(tipo);
            figura->lerAtributosArea();
            cout << figura->getNome() << " polimórfico de área " << figura->calcularArea() << endl;
        }else if(tipo == 4){
            figura = new Circulo(tipo);
            figura->lerAtributosArea();
            cout << figura->getNome() << " polimórfico de área " << figura->calcularArea() << endl;
        }
    }
}