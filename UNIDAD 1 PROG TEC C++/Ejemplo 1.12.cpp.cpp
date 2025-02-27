/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "math.h"
using namespace std;

int main()
{
    float L1,L2,L3,S,AREA;
    const float PI=3.141592;
    
    std::cout<<"Escribe la medida del lado uno del triangulo "<<"\n";
    std::cin >> L1;
    std::cout<<"Escribe la medida del lado dos del triangulo "<<"\n";
    std::cin >> L2;
    std::cout<<"Escribe la medida del lado tres del triangulo "<<"\n";
    std::cin >> L3;
    
    S=(L1+L2+L3)/2;
    AREA=sqrt(S*(S-L1)*(S-L2)*(S-L3));
    std::cout<<"El area del triangulo "<<AREA<<"\n";

    return 0;
}