#include<iostream>
#include<conio.h>
#include<locale>
using namespace std;

// protótipo da função
// num -> Valor no qual será realizado o fibonacci
int fibonacci(int num);

int main() { // Corpo principal do programa
    setlocale(LC_ALL, "portuguese");
    
    int num, resp; // Utilizo variáveis inteiras
    cout << "\n Sequência Fibionacci (Alguns números)";
    cout << "\n\n 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, " <<
	        "144, 233, 377, 610, 987, 1597, 2584, 4181,...";
	cout << "\n\n\n Digite um número de uma determinada posição do fibonacci: ";
	
	// ------------
	cin >> num; // O usuário irá digitar a posição que deseja. 	
	num = num - 1; // Na programação temos que considerar a posição escolhida diminuindo 1!!!
	// Então ele irá retornar a posição correta !!!
	// ------------
	
    resp = fibonacci(num);
	cout << " Resposta: " << resp;
	cout << "\n\n PRESSIONE QUALQUER <T E C L A> PARA FINALIZAR !!!";
	getch(); return 0; }

// função com recursividade
// (Função chama a si própria)
int fibonacci(int num){
	// Condição de parada e chamada da função novamente
    // Se fib for igual a 0 ou igual 1 então...	
    if ((num == 0) || (num == 1)) { 
     	return num; // Trivial / Caso base.
       } else { // senão...      
       // Retorna a soma dos dois antecessores
       // Recursivo (Caso geral)
       return fibonacci(num-1) + fibonacci(num-2);	}
}


