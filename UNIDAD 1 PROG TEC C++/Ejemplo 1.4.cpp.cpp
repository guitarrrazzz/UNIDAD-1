/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    const float LITRO = 3.785, PRECIOLITRO = 8.20;
    float GAL, TOTAL;
    cout << "Escriba la cantidad de galones comprados" << endl;
    cin >> GAL;
    TOTAL = GAL * LITRO * PRECIOLITRO;
    cout << "El total a pagar es de: " << TOTAL << endl;
    return 0;
}