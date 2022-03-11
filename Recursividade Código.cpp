#include <iostream>
#include <conio.h>
#include <locale>
using namespace std;

// protótipo da função 
// num -> Valor no qual será realizado o fatorial

int fatorial(int num);
int main() { // Corpo principal do programa
    setlocale(LC_ALL, "portuguese");
    
    // Para trabalhar com o problema fatorial,
    // vou precisar de uma variável inteira.
    
    int num, resp;
    cout << "\n\n Digite um número para ser calculado o seu fatorial: ";
    cin >> num;
    resp = fatorial(num);
    cout << "Resposta: " << resp;
    cout << "\n\n PRESSIONE QUALQUER TECLA PARA FINALIZAR!";
    getch();
    return 0;
}

//  Função com recursividade
// (Função chama a si própria)
int fatorial(int num){
    //Condição de parada e chamado da função novamente
    if (num <= 1) { // Se num for menor e igual a 1 então
        return 1; // retorna o valor 1(Caso base (Trivial).
    } else { //se não...
    // Retorna o num mltiplicado
    // Pelo fatorial (num - 1), e quem é num-1?
    // O antecessor...
    return num * fatorial(num-1); // 
    }
}