/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "math.h"

int main()
{   
    float X1,Y1,X2,Y2,DIS;
    std::cout<< "Escribe la coordenada X del primer punto "<<"\n";
    std::cin >>X1;
    std::cout<< "Escribe la coordenada Y del primer punto "<<"\n";
    std::cin >>Y1;
    std::cout<< "Escribe la coordenada X del segundo punto "<<"\n";
    std::cin >>X2;
    std::cout<< "Escribe la coordenada Y del segundo punto "<<"\n";
    std::cin >>Y2;
    
    DIS=sqrt(pow((X1-X2),2)+pow((Y1-Y2),2));
    std::cout<<"La distancia entre el punto "<<X1<<","<<Y1<<"y el punto "<<X2<<","<<Y2<<"es "<<DIS<<"\n";
   

    return 0;
}