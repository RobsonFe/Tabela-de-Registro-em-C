//Aluno: Robson Ferreira da Silva
//Curso: Analise e Desenvolvimento de Sistemas
//Periodo: 2
//Recife - PE


#include <stdio.h>
#include <stdlib.h>
#define SIZE 200

char nome[SIZE][50];
char email[SIZE] [50];
int cpf[SIZE];
int op;

void cadastro();

int main(void){
    cadastro();


    return 0;
}

void cadastro() {

    static int linha;
    do{
        printf("\nDigite o nome: ");
        scanf("%s", &nome);
        printf("\nDigite o Email: ");
        scanf("%s", &email);
        printf("\nDigite o CPF: ");
        scanf("%d", cpf);
        printf("\nDigite 1 para continuar ou outro valor para sair: ");
        scanf("%d",&op);
        linha++;
    }while(op==1);
}
