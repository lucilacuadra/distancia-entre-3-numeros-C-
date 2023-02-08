#include <iostream>
#include <stdio.h>
using namespace std;
/*Elaborar un programa que solicite al usuario que se ingresen tres números enteros sin un orden
en particular. A continuación el programa deberá identificar si el promedio entre el mayor y el
menor es exactamente igual al otro número ingresado, informando los 3 valores están igualmente
distanciados o no. Ejemplo:
Ingrese el primer número: 5
Ingrese el segundo número: 2
Ingrese el tercer número: 8
Están igualmente distanciados.*/

int main () {

int numero1, numero2, numero3, caso1, caso2, caso3, caso4, caso5, caso6, totalcaso1, totalcaso2, totalcaso3, totalcaso4, totalcaso5, totalcaso6;

 cout << "Ingrese primer numero: ";
 cin >> numero1;
 cout << "Ingrese segundo numero: ";
 cin >> numero2;
 cout << "Ingrese tercer numero: ";
 cin >> numero3;
 caso1 = (numero1-numero2);
 caso2 = (numero1-numero3);
 caso3 = (numero2-numero1);
 caso4 = (numero2-numero3);
 caso5 = (numero3-numero2);
 caso6 = (numero3-numero1);
 totalcaso1 = (caso1 == caso2||caso1 == caso3||caso1 == caso4||caso1 == caso5||caso1 == caso6);
 totalcaso2 = (caso2 == caso1||caso2 == caso3||caso2 == caso4||caso2 == caso5||caso2 == caso6);
 totalcaso3 = (caso3 == caso2||caso3 == caso1||caso3 == caso4||caso3 == caso5||caso3 == caso6);
 totalcaso4 = (caso4 == caso2||caso4 == caso3||caso4 == caso1||caso4 == caso5||caso4 == caso6);
 totalcaso5 = (caso5 == caso2||caso5 == caso3||caso5 == caso4||caso5 == caso1||caso5 == caso6);
 totalcaso6 = (caso6 == caso2||caso6 == caso3||caso6 == caso4||caso6 == caso5||caso6 == caso1);
 if (caso1 > 0 && totalcaso1){
    cout << "Estan igualmente distanciados." << endl;}
 else if (caso2 > 0 && totalcaso2){
    cout << "Estan igualmente distanciados." << endl;}
 else if (caso3 > 0 && totalcaso3){
    cout << "Estan igualmente distanciados." << endl;}
 else if (caso4 > 0 && totalcaso4){
    cout << "Estan igualmente distanciados." << endl;}
 else if (caso5 > 0 && totalcaso5){
    cout << "Estan igualmente distanciados." << endl;}
 else if (caso6 > 0 && totalcaso6){
    cout << "Estan igualmente distanciados." << endl;}

    else {cout << "No estan igualmente distanciados."<< endl;}


return 0;

}
