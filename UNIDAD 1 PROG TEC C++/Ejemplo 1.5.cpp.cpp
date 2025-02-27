/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    float RADIO, ALTURA, VOLUMEN, AREA;
    cout << "Ingresa el valor del radio del cilindro" << endl;
    cin >> RADIO;
    cout << "Ingresa el valor del altura del cilindro" << endl;
    cin >> ALTURA;
    VOLUMEN = (3.14159 * (RADIO * RADIO) * ALTURA);
    AREA = (2 * 3.14159 * (RADIO * ALTURA));
    cout << "El valor del area del cilindro es de " << AREA << " y el valor de su volumen es de " << VOLUMEN << endl;
    return 0;
}