//Operador Seta ->
// utilizado para acessar um membro de uma estrutura(STRUCT)
//exemplo: 

struct TESTE {
    int a;
    int b;

};

struct TESTE x;

x.a =200;

//******************************
//referenciando o ponteiro com estrutura:
(*p).a = 400;  

// referenciando com a seta: mesma coisa que o de cima porém mais fácil de identificar.
p-> = 400;


// EXEMPLO DE CÓDIGO:

#include<iostream>
using namespace std;

struct TESTE {
    int a;
    int b;
};

int main ()
{
    struct TESTE *p, x;

    p = &x;

    p ->a = 200;
    p ->b = 400;

    cout << x.a << "\n\n" << x.b;
}



