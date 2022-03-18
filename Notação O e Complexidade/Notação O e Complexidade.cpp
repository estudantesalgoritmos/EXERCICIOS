// TEMA DE PROVA
// NOTAÇÃO O 
// CONSTRUA UM ALGORITMO ABAIXO E ALTERE O VALOR DE n ( INICIANDO EM 1E+0 ATÉ 1E+9 ) E MONTE O GRÁFICO:


#include<iostream>
#include<time.h>

using namespace std;
int main() {
    
int n=1E+8; //Vamos iniciar com o velor 1.00   // Esse valor vai sendo trocado 1E+0, 1E+1 e assim por diante... anota cada valor final
// time_t -> O tipo de dado time_t é definido pela biblioteca ISO da linguagem C para armazenar valores de tempo.
//          Estes valores são obtidos através da função time()

time_t inicio, fim;
    time(&inicio);  // obtendo o tempo em segundos
    for (int i=0; i<n;i++){
        for (int j=0; j<1E+3; j++) {
            time(&fim);
        }
    }
    
    // difftime -> Calcula a diferença em segundos entre o inicio e o fim 
cout << "\n\n\n Tempo: " << difftime(fim,inicio) << "segundos!";
}

// ********************************************** //
// RESULTADOS OUTPUT:
//
// ENTRADA DE DADOS         TEMPO DE RESPOSTA EM SEGUNDOS
// n=1E+0                            0 
// n=1E+1                            0
// n=1E+2                            0
// n=1E+3                            0
// n=1E+4                            0
// n=1E+5                            0
// n=1E+6                            3
// n=1E+7                            32
// n=1E+8                            198
// n=1E+9                            2382
//
//
// for dentro de um for dá n2 - no gráfico 

// complexidade no código
// quando tem FOR = O(n)
// se tiver size() = O(1)
// atribuições (IF, RETURN) = O(1)  - Ignorados constantes O(1) e só sobra o O(n) e no gráfico O(n) é bom
// 
//  quando tem um for dentro de um FOR = O(n) e O(n) então multiplica que é igual O(n) * O(n) = O(n²)
//
// se tiver 4 O(n) - FOR duas dentro e duas fora =  O(n) * O(n) + O(n) + O(n) 
//                                                   O(n²) + 2*O(n)
//                                                    O(n²) + O(n)
//                                                        O(n²)    // o resultado final predomina o de maior grau
//
//

