/*Ejercicio 2
Escriba un programa que calcule el impuesto de un producto basado en 
su precio y categoría, utilizando operadores ternarios. 
1. El programa debe solicitar al usuario ingresar el precio del producto y 
su categoría, donde las categorías son: 
"Electrónica" (se aplica un 20% de impuesto). 
"Ropa" (se aplica un 10% de impuesto). 
"Alimentos" (se aplica un 5% de impuesto). 
2. Si el precio es mayor a 1000, se aplica un descuento del 10% sobre el 
precio original antes de calcular el impuesto. 
3. Usa operadores ternarios para: 
Determinar el impuesto según la categoría. 
Aplicar el descuento si el precio es mayor a 1000. 
Calcular el precio final después de aplicar impuestos y 
descuentos.*/

#include <iostream>
using namespace std;
 
int main()
{ 
    float impuesto, descuento=0.0, precio_producto, precio_final, precio_descuento;
    string categoria;

    system("chcp 65001 > nul");
    cout <<"Ingrese precio del producto : "<<endl;
    cin >> precio_producto;
    cout <<"Ingrese categoria del producto (Electronica, Ropa, Alimentos) : "<<endl;
    cin >> categoria;

    descuento=(precio_producto>1000)? precio_producto*0.10:
    0.0;
    precio_descuento=precio_producto-descuento;

    impuesto=(categoria=="Electronica")? precio_descuento*0.20:
    (categoria=="Ropa")? precio_producto*0.10:
    (categoria=="Alimentos")? precio_producto*0.05:
    0.0;

    precio_final=precio_descuento+impuesto;
    cout <<"Recibo de venta: "<<endl;
    cout <<"Precio producto: "<<precio_producto<<endl;
    cout <<"Descuento: "<<descuento<<endl;
    cout <<"Impuesto: "<<impuesto<<endl;
    cout <<"Precio final: "<<precio_final<<endl;

    return 0;
}