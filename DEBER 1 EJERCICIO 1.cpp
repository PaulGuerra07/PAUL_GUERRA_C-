/*Ejercicio 1
Escriba un programa que determine si una persona es apta para una 
oferta de empleo, basada en sus años de experiencia y nivel educativo. 
1. El programa debe solicitar al usuario ingresar los años de experiencia 
y el nivel educativo (Primaria, Secundaria, Universitaria). 
2. Usa operadores ternarios para: 
Si tiene al menos 5 años de experiencia y un nivel universitario, se 
aprueba la oferta. 
Si tiene entre 3 y 5 años de experiencia y un nivel secundario, se 
aprueba la oferta. 
o Si tiene menos de 3 años de experiencia, no se aprueba la oferta. 
*/

#include <iostream>
using namespace std;
 
int main()
{
    int experience;
    string educational_level, result;

    system("chcp 65001 > nul");
    cout <<"Ingrese sus años de experiencia laboral: "<<endl;
    cin >> experience;
    cout <<"Ingrese grado estudio o de nivel educativo (Primaria, Secundaria, Universitaria): "<<endl;
    cin >> educational_level;

    result=(experience>=5 && educational_level=="Universitaria")? "Aprobado":
    ((experience>=3 || experience>=5) && educational_level=="Secundaria")? "Aprobado":
    "No aprobado";

    cout<<"Resultado de oferta de empleo: "<<result<<endl;
    return 0;
}