/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int l1, l2,l3;
    cout<<"Digite 3 lados"<<"\n";
    cin>>l1>>l2>>l3;
    
    if(l1<l2+l3 && l2<l1+l3 && l3<l1+l2){
        if(l1==l2 && l2==l3)
        
        cout<<"Triângulo equilátero "<<"\n";
        
        else if(l1==l2 || l2==l3 || l3==l1)
        cout<<"Triângulo isóceles"<<"\n";
        
        else
            cout<<"Triângulo escaleno"<<"\n";
        
    }
    else{
        cout<<"não  formam triângulo"<<"\n";
        
    }
    
    
    

    return 0;
}