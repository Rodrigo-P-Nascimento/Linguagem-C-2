#include <iostream>
#include <iomanip>

using namespace std;

//Declaração da Classe Mãe
class FigurasGeometricas{

protected:
    string nome;
    int tipo;

public:
    FigurasGeometricas(int tipo);
    FigurasGeometricas();
    float calculaArea();
    void lerAtributos();
    string getNome();
  
};
//Metodos da classe mãe
FigurasGeometricas::FigurasGeometricas(int tipo){
    this->tipo = tipo;
}
float FigurasGeometricas::calculaArea(){
}
void FigurasGeometricas::lerAtributos(){
}
string FigurasGeometricas::getNome(){
    return this->nome;
}//Fim da classe FigurasGeometricas

//Declarando as classes filhas da classe mãe FigurasGeometricas
class Quadrado : public FigurasGeometricas{
private:
    float lado;
public:
    Quadrado(int tipo);
    float calculaArea();
    void lerAtributos();

};

Quadrado::Quadrado(int tipo) : FigurasGeometricas(tipo){
    nome = "Quadrado";
}
float Quadrado::calculaArea(){
    return lado*lado;
}
void Quadrado::lerAtributos(){
    cin >> lado;
}

class Retangulo : public FigurasGeometricas{
private:
    float lado1, lado2;
public:
    Retangulo(int tipo);
    float calculaArea();
    void lerAtributos();
};

Retangulo::Retangulo(int tipo) : FigurasGeometricas(tipo){
    nome = "Retângulo";
}
float Retangulo::calculaArea(){
    return lado1*lado2;
}
void Retangulo::lerAtributos(){
    cin >> lado1 >> lado2;
}

class Triangulo : public FigurasGeometricas{
private:
    float base, altura;
public:
    Triangulo(int tipo);
    float calculaArea();
    void lerAtributos();
};

Triangulo::Triangulo(int tipo) : FigurasGeometricas(tipo){
    nome = "Triângulo";
}
float Triangulo::calculaArea(){
    return (altura*base) / 2;
}
void Triangulo::lerAtributos(){
    cin >> altura >> base;
}

class Circulo : public FigurasGeometricas{
private:
    float raio;
public:
    Circulo(int tipo);
    float calculaArea();
    void lerAtributos();
};

float Circulo::calculaArea(){
    return (raio*raio) * 3.14;
}
void Circulo::lerAtributos(){
    cin >> raio;
}
Circulo::Circulo(int tipo) : FigurasGeometricas(tipo){
    nome = "Círculo";
}//Fim da declaração das classes filhas

int main(){

    int tipo=1;

    while (tipo){
        cin >> tipo;

        if(tipo == 1){
            Quadrado q = Quadrado(tipo);
            q.lerAtributos();
            cout << q.getNome() << " de área " << q.calculaArea() << endl;
        }else if(tipo == 2){
            Retangulo r = Retangulo(tipo);
            r.lerAtributos();
            cout << r.getNome() << " de área " << r.calculaArea() << endl;
        }else if(tipo == 3){
            Triangulo t = Triangulo(tipo);
            t.lerAtributos();
            cout << t.getNome() << " de área " << t.calculaArea() << endl;
        }else if(tipo == 4){
            Circulo c = Circulo(tipo);
            c.lerAtributos();
            cout << c.getNome() << " de área " << c.calculaArea() << endl;
        }
    }
    
    return 0;
}