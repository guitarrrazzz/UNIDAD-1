/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    float base, altura, perimetro, area;
    cout << "Ingresa la base del rectangulo" << endl;
    cin >> base;
    cout << "Ingresa la altura del rectangulo" << endl;
    cin >> altura;
    perimetro = (base + altura) * 2 ;
    area = base * altura;
    cout << "El perimetro del rectangulo es: " << perimetro << endl;
    cout << "El area es: " << area << endl;
    return 0;
}