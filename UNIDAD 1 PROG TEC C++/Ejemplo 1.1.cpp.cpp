/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main() {

    float PRECIOPRO, PAGO, CAMBIO;
    cout << "Ingrese el costo del producto" << endl;
    cin >> PRECIOPRO;
    cout << "Ingrese cuanto dinero le dio el cliente" << endl;
    cin >> PAGO;
    CAMBIO = PAGO - PRECIOPRO;
    cout << "El cambio es " << CAMBIO << endl;
    return 0;
}
