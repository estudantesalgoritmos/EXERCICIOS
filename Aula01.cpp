#include <stdio.h>
#include <locale.h>
    struct Funcionario {
        int matricula;
        char nome[50];
        float salario;
} ;

int main(){
    setlocale(LC_ALL, "portuguese");
    Funcionario f[2]; //max de 2 funcionarios
    int idx=0;
    
    printf("\n *** Cadastro ***");
    
    for (idx=0; idx<2; idx++) {
        
        f[idx].matricula = idx+1;
        printf("\n\n Qual a matricula do funcionario?: %d", f[idx].matricula);
        printf("\n Qual o nome do funcionario?: ");
        scanf(" %s", f[idx].nome);
        printf("Qual o salario do funcionario?: ");
        scanf("%f", &f[idx].salario);
        
        
    int i;
    for(i = 0; i< idx; i++){
          printf("\n\n Funcionario\n");
          printf(" Matricula: %d\n", f[i].matricula);
          printf(" Nome: %s \n",f[i].nome);
          printf(" Salario: %.2f\n", f[i].salario);
          printf("*********************** \n");
          
          }
}
}
