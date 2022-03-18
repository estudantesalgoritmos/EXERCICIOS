#include <iostream>
#include <conio.h>
#include <locale>
using namespace std;

// protótipo da função 
// num -> Valor no qual será realizado o fatorial

int main() { //Corpo principal do programa
    setlocale(LC_ALL, "portuguese");
    
    // Para trabalhar com o problema fatorial, vou precisar de uma variavel inteira
    
    int num, resp;
    
    cout << "\n Sequencia Fibonacci ( Alguns números)";
    cout << "\n\n 0, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89," <<
            "144, 293, 377, 610, 987, 1597, 2584, 4181,...";
    cout << "\n\n Digite um número de uma determinada posição do Fibonacci: ";
    cin >> num; resp = fibonacci(num);
    cout << "Resposta: "<< resp;
    cout << "\n\n PRESSIONE QUALQUER TECLA PARA FINALIZAR!!";
    getch(); return 0; }
    
    int fibonacci(int num){
        if ((num == 0)) || (num == 1) {
            return num;
        } else {
        return fibonacci(num-1) + fibonacci(num-2); }
    }
        }
        }
    }