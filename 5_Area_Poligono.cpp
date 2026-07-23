/*
 * Crea una única función (importante que sólo sea una) que sea capaz
 * de calcular y retornar el área de un polígono.
 * - La función recibirá por parámetro sólo UN polígono a la vez.
 * - Los polígonos soportados serán Triángulo, Cuadrado y Rectángulo.
 * - Imprime el cálculo del área de un polígono de cada tipo.
 */
#include<iostream>
using namespace std;
typedef enum{Triangulo,Cuadrado, Rectangulo}poligono;
double area_Poligono(poligono p,double a,double b=0){
    double area;
    switch (p)
    {
    case Triangulo:
        area=(a*b)/2;
        break;
     case Cuadrado:
        area= a*a;
        break;
     case Rectangulo:
        area=a*b;
        break;
    default:
        break;
    }
    return area;
}
int main() {
    cout << "Área del Triángulo (base 5, altura 3): " 
         << area_Poligono(Triangulo, 5, 3) << endl;

    cout << "Área del Cuadrado (lado 4): " 
         << area_Poligono(Cuadrado, 4) << endl;

    cout << "Área del Rectángulo (base 6, altura 3.5): " 
         << area_Poligono(Rectangulo, 6, 3.5) << endl;

    return 0;
}