/*Ejercicio 3
Escriba un programa en C++: 
• Solicite al usuario una temperatura en grados Celsius (permitir 
decimales). 
• Verifica si la temperatura es válida (debe estar entre -100 y 100). Si no 
lo es, muestra un mensaje de error. 
• Convierte la temperatura a grados Fahrenheit con la fórmula: F = C * 
9 / 5 + 32; 
• Clasifica la temperatura en Celsius usando operador ternario 
anidado: 
a. Menor a 0 °C: “Muy fría” 
b. Entre 0 °C y 15 °C: “Fría” 
c. Entre 15 °C y 30 °C: “Templada” 
d. Mayor a 30 °C: “Caliente” 
• Además, solicita una temperatura umbral de comparación, y usa 
expresiones lógicas y relacionales para determinar: 
a. ¿Es mayor que el umbral? 
b. ¿Es múltiplo de 5? o “No es múltiplo de 5”.*/

#include <iostream>
using namespace std;
 
int main()
{
   string temperatura;
   float grados_Celsius, grados_Fahrenheit, tempertura_umbral_de_comparacion;
   bool mayor, multiplo;

    system("chcp 65001 > nul");
    cout <<"Ingrese una temperatura en grados Celsius entre (-100 y 100): "<<endl;
    cin >>grados_Celsius;
    
    if(grados_Celsius<-100||grados_Celsius>100)
    {
        cout<<"Error, no se encuentra dentro del nivel permitido" <<endl;
        return 0;
    }
    grados_Fahrenheit=grados_Celsius * 9 / 5 + 32;
    temperatura=(grados_Celsius<0)? "Muy fria":
    (grados_Celsius>=0||grados_Celsius<=15)? "Fria":
    (grados_Celsius>15||grados_Celsius<=30)? "Templada":
    "Caliente";

    cout <<"Ingrese una temperatura umbral de comparacion" <<endl;
    cin >>tempertura_umbral_de_comparacion;
    mayor=grados_Celsius>tempertura_umbral_de_comparacion;
    multiplo=static_cast<int>(grados_Celsius)%5==0;

    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Temperatura en Celsius: " << grados_Celsius << "°C" << endl;
    cout << "Temperatura en Fahrenheit: " << grados_Fahrenheit << "°F" << endl;
    cout << "Clasificación: " << temperatura << endl;
    cout << "¿Es mayor que " << tempertura_umbral_de_comparacion << "? " 
         << (mayor ? "Si" : "No") << endl;
    cout << "¿Es múltiplo de 5? " << (multiplo ? "Si" : "No") << endl;
}