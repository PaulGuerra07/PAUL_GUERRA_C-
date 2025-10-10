/*Ejercicio 4
Escriba un programa que defina un número secreto fijo (por ejemplo, 7), 
o lo puede ingresar por teclado. 
El usuario tiene hasta 5 intentos para adivinar el número. 
Por cada intento: 
Se incrementa un contador de intentos. 
Se compara el número ingresado con el secreto: 
Si es igual: se imprime “¡Correcto! Lo lograste en X intentos” y el programa 
termina. 
o Si no: Usa un operador ternario para mostrar: 
o “Demasiado alto” si el número es mayor. 
o “Demasiado bajo” si es menor. 
o Si el usuario falla los 5 intentos, el programa muestra: “Lo siento, 
se agotaron los intentos. El número era X”.*/

#include <iostream>
using namespace std;
 
int main()

{
    system("chcp 65001 > nul");

    int intentos, contador=0;
    const int numero_secreto=7;
    bool secreto= false;

    while (contador<5 && !secreto)
    {cout <<"Escriba un numero"<< endl;
     cin >> intentos;
     contador++;
     if (intentos==numero_secreto)
         {cout <<"¡Correcto! Lo lograste en: "<< contador<<" intentos " << endl;
         cin >> intentos;
         secreto= true;}
     else{
        cout <<(intentos>numero_secreto?"Demasiado alto":" Demasiado bajo ")<< endl;
     }
    }
    if (!secreto)
    {
        cout<<"Lo siento, se agotaron los intentos "<<" el numero era: "<<numero_secreto<< endl;
    }
    
    return 0;
}