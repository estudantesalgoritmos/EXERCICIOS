#include<iostream>
#include<conio.h>
#include<locale>
using namespace std;

// prot�tipo da fun��o
// num -> Valor no qual ser� realizado o fibonacci
int fibonacci(int num);

int main() { // Corpo principal do programa
    setlocale(LC_ALL, "portuguese");
    
    int num, resp; // Utilizo vari�veis inteiras
    cout << "\n Sequ�ncia Fibionacci (Alguns n�meros)";
    cout << "\n\n 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, " <<
	        "144, 233, 377, 610, 987, 1597, 2584, 4181,...";
	cout << "\n\n\n Digite um n�mero de uma determinada posi��o do fibonacci: ";
	
	// ------------
	cin >> num; // O usu�rio ir� digitar a posi��o que deseja. 	
	num = num - 1; // Na programa��o temos que considerar a posi��o escolhida diminuindo 1!!!
	// Ent�o ele ir� retornar a posi��o correta !!!
	// ------------
	
    resp = fibonacci(num);
	cout << " Resposta: " << resp;
	cout << "\n\n PRESSIONE QUALQUER <T E C L A> PARA FINALIZAR !!!";
	getch(); return 0; }

// fun��o com recursividade
// (Fun��o chama a si pr�pria)
int fibonacci(int num){
	// Condi��o de parada e chamada da fun��o novamente
    // Se fib for igual a 0 ou igual 1 ent�o...	
    if ((num == 0) || (num == 1)) { 
     	return num; // Trivial / Caso base.
       } else { // sen�o...      
       // Retorna a soma dos dois antecessores
       // Recursivo (Caso geral)
       return fibonacci(num-1) + fibonacci(num-2);	}
}


