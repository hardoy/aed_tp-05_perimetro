//~ Perímetro: calcula el perímetro de un rectángulo a partir de lo que el 
//~ usuario ingresa como base y altura.
//~ Antonio Agustín Hardoy
//~ 13 de Mayo de 2015

#include <iostream>
using namespace std;

double GetNumeroPositivo ();
double GetPerimetro (double, double);

int main() {
cout << "Por favor, ingrese la longitud de la base del rectángulo\n";
double base = GetNumeroPositivo ();
cout << "Por favor, ingrese la longitud de la altura del rectángulo\n";
double altura = GetNumeroPositivo ();
cout << "El perímetro del rectángulo es: ";
cout << GetPerimetro (base, altura);
}

double GetNumeroPositivo () {
double numero;
do cin >> numero;
while (numero <=0);
return numero;
}

double GetPerimetro (double base, double altura) {
return (base + altura) * 2;
}
