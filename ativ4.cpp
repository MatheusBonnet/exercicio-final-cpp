#include <iostream>
using namespace std;

void quadrado(float lado);
void retangulo(float base, float altura);
void triangulo(float base, float altura);
void circulo(float diametro);

int main(){
    
    quadrado(10.5);
    retangulo(30.9, 60.5);
    triangulo(60.8, 3.5);
    circulo(6.8);

    return 0;
}

void quadrado(float lado)
{
    float area = lado * lado;
    float perimetro = lado * 4;

    cout << "Figura Geometrica: Quadrado \n";
    cout << "Area " << area << "\n";
    cout << "Perimetro: " << perimetro << "\n";
}

void retangulo(float base, float altura)
{
    float area = base * altura;
    float perimetro = (base + altura) * 2;

    cout << "Figura Geometrica: Retangulo \n";
    cout << "Area " << area << "\n";
    cout << "Perimetro: " << perimetro << "\n";
}

void triangulo(float base, float altura)
{
    float area = (base * altura) / 2;
    float perimetro = base + (altura * 2);

    cout << "Figura Geometrica: Triangulo \n";
    cout << "Area " << area << "\n";
    cout << "Perimetro: " << perimetro << "\n";
}

void circulo(float diametro)
{
    float pi = 3.1415;
    float area = 3.1415 * (diametro / 2);
    float perimetro = (2 * pi) * diametro;

    cout << "Figura Geometrica: Circulo \n";
    cout << "Area " << area << "\n";
    cout << "Perimetro: " << perimetro << "\n";
}

