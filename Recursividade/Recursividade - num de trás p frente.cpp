
//Relembrando Recursividade
#include<iostream>
#include<locale.h>
using namespace std;


int dec2bin(int dec);

int main() {
    setlocale(LC_ALL, "portuguese");
    int dec;
    cout << "Digite um no. inteiro";
    cin >> dec;
    cout << "\n\n(leia da direita para a esquerda)";
    cout << "\nResultado:";
    dec2bin(dec);
    return 0;
}

int dec2bin(int dec) {
    int n, resto;
    if (dec/2!=0) {
        n=dec/2;
        resto=dec%2;
        cout << resto <<" ";
        return dec2bin(n);
    } else {
        resto=dec%2;
        cout << resto <<" ";
    }
}
    
