/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int A,B;
    float RES;
    cout << "Hola! Este programa 1.7 Escribir el resultado de la expresion" <<"\n";
    cout << "Por favor ingresa el valor de A: " << "\n";
    cin >> A;
    cout << "Por favor ingresa el valor de B: " << "\n";
    cin >> B;
    
    RES=((A+B)*(A+B))/3.0;
    
    printf ("\n El resultado de la expresion es %5.4f \n", RES);
    cout << "EL RESULTADO DE LA EXPRESION ES: " << RES <<"\n";
    


    return 0;
}