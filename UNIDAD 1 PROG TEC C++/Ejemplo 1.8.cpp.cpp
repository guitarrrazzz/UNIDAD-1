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
  int MAT;
  float PRO,C1,C2,C3,C4,C5;
  
  cout << "Hola! Este programa 1.8 Promedio calificaciones" <<"\n";
  cout << "Por favor ingrese la matricula del alumno: " << "\n";
  cin >> MAT;
  cout << "Por favor ingrese la primera calificacion: " << "\n";
  cin >> C1;
  cout << "Por favor ingrese la segunda calificacion: " << "\n";
  cin >> C2;
   cout << "Por favor ingrese la tercera calificacion: " << "\n";
  cin >> C3;
   cout << "Por favor ingrese la cuarta calificacion: " << "\n";
  cin >> C4;
   cout << "Por favor ingrese la quinta calificacion: " << "\n";
  cin >> C5;
  PRO=(C1+C2+C3+C4+C5)/5.0;
  printf ("\n El promedio del alumno con matricula %d es %5.2f \n",MAT,PRO);
  cout << "\n El promedio del alumno con matricula " << MAT <<" es "<<PRO <<"\n";
    return 0;
}