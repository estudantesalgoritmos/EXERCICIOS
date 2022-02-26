// PONTEIROS
// Ponteiros são variáveis que armazenam endereço de memória da variável.
// Úteis para acessar uma determinada variável em diferentes partes de um programa.
// São declrados pelo símbolo "*" entre o tipo de nome da variável. Ex: int*p;
// o "&"" obtém o endereço de memória da variável e guarda o ponteiro.
// Considere: *pt_x = 50 ---> o valor da variável x é alterada pelo ponteiro *pt_x.

//exemplo ponteiro:
int ano = 1999;
//declaração da variável ponteiro
int *ptano;
//atribuido o endereço da variável ano ao ponteiro
ptano=&ano;


//EXEMPLO CÓDIGO:

#include<iostream>
#include<<conio.h>
#include<locale.h>

using namespace std;
int main(){
    setlocale(LC_ALL,"portuguese");

    //v_num é a vaiável que será apontada pelo ponteiro
    int v_num=10;

    //declaração da variável ponteiro
    int*ptr;

    //atribuindo o endereço da variável v_num ao ponteiro
    ptr = &v_num;

    cout <<"Utilizando Ponteiros\n\n";
    cout <<"Conteúdo da variável v_num: " << v_num;
    cout <<"\nEndereço da vaariável v_num: " << &v_num;
    cout <<"\nConteúdo da variável ponteiro ptr: " << ptr;
    cout <<"\n Dessa forma mostra o conteúdo da variável v_num: "<< *ptr;
    getch(); // lê um caracter do teclado
    return(0); }

}
