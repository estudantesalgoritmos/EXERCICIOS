#include<iostream>
#include<string.h>
using namespace std;

void Inverter(char palavra[], int tamanho);

int main() {
    char palavra[10];
    int tamanho;
    cout << "\n Digite uma palavra: ";
    cin >> palavra;
    tamanho=strlen(palavra)-1;
    cout << "\n\n Palavra invertida: ";
    Inverter(palavra, tamanho);
    return 0;
}

void Inverter(char palavra[], int tamanho) {
    if (tamanho >= 0) {
        cout << " " << palavra[tamanho];
        Inverter (palavra, tamanho -1);
    }
}