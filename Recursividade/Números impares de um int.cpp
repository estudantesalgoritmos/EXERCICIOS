#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

int s_impar(int valor);

int main () {
setlocale(LC_ALL, "portuguese");
int valor;
cout << "\n\n Digite um número inteiro: ";
cin >> valor;
cout << "\n\n Números ímpares: ";
cout << "\n\n Resultado: " << s_impar(valor);
getch();
}


int s_impar(int valor) {
    if (valor >=1) {
        
        if (valor % 2 == 0) {
            return s_impar (valor-1);
            
        }
        
            cout << " " << valor;
            return valor + s_impar(valor -1);
    }
}
