/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// ORDENAÇÃO - SELECTION SORT 
// Sempre buscar o menor dos valores restantes e levá-lo a posições iniciais



#include <iostream>
#include<cstdlib>
#include <locale.h>
using namespace std;

void selecao(int vet[], int tam)
{ int j, i, aux, temp;
    for (i=0; i<tam -1; i++) {
        aux=i;
         for(j=i+1; j<tam; j++) {
           if(vet[aux] > vet[j]) {
             aux=j;
            }
        }
    temp=vet[aux];
    vet[aux]=vet[i];
    vet[i]=temp;
    }
}

int main() {
        setlocale(LC_ALL, "portuguese");
        int vet[]={13,23,3,8,1}, tam=5;
        selecao(vet,tam);
        cout<<"Final da ordenação por seleção:"<<vet[0]<<" "<<vet[1]
            << " " << [vet2] << " " << vet[3] << " " << vet[4];
        system("PAUSE");}
        
    
}