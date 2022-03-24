// Exercício: Construa um programa que atráves de uma função recursiva, realize um 
// cálculo exponencial de x elevado a y. 
// exemplo: digite o num inteiro x:2 
//          digite o num inteiro y:3 
//          resposta: x elevado a y é: 8




#include<iostream>
#include<conio.h>
#include<locale.h>
using namespace std;

int expo (int x, int y);

int main(void) {
    setlocale(LC_ALL, "portuguese");
    int x, y, e;
    cout << "\n *** Exponencial de x elevado a y ***";
    cout << "\n\n Digite o número inteiro x: ";
    cin >> x;
    cout << "\n Digite o número inteiro y: ";
    cin >> y;
    if (y < 0) {
        cout << "y tem que ser maior ou igual a zero!";
        getch(); }
    else {
        e=expo(x,y);
        cout << "\n\n Resposta: x elevado a y é: " << e;
    getch();}
}

int expo (int x, int y)  {
    if (y == 0) {
        return 1; }
        
    if (y == 1) {
        return x;}
        
        
    return x*expo(x,y-1);
}
