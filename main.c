//Aluno: Robson Ferreira da Silva
//Curso: Analise e Desenvolvimento de Sistemas
//Periodo: 2
//Recife - PE

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 200

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

char nome[SIZE][50];
char email[SIZE][50];
int cpf[SIZE];
int op;

int totalContatos = 0; // Variável para controlar a quantidade de contatos cadastrados

void cadastro();
void pesquisa();
void lista();

int main(void)
{
    do
    {
        system("cls");
        printf("\n-----Menu-----\n1 - Cadastrar\n2 - Listar Todos\n3 - Pesquisar\n4 - Sair\n\n ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            cadastro();
            break;

        case 2:
            lista();
            break;

        case 3:
            pesquisa();
            break;

        case 4:
            system("exit");
            break;

        default:
            printf("Opcao Invalida!");
            break;
        }
    } while (op != 4);
}

void lista()
{
    int i;
    for (i = 0; i < totalContatos; i++)
    {
        printf("\nNome: %s\nEmail: %s\nCPF: %d\n", nome[i], email[i], cpf[i]);
    }
    limpar_entrada();
    limpar_entrada();
}

void cadastro()
{
    int linha = totalContatos; // Começar o cadastro a partir da próxima posição disponível
    do
    {
        printf("\nDigite o nome: ");
        scanf("%s", nome[linha]);
        limpar_entrada();
        printf("\nDigite o Email: ");
        scanf("%s", email[linha]);
        printf("\nDigite o CPF: ");
        scanf("%d", &cpf[linha]);
        printf("\nDigite 1 para continuar ou outro valor para sair: ");
        scanf("%d", &op);
        linha++;
        totalContatos++; // Incrementar a quantidade total de contatos
    } while (op == 1);
} //Fim da função cadastro.

void pesquisa()
{
    int cpfPesquisa;
    char emailPesquisa[50];
    int i;
    do
    {
        printf("\n Digite 1 para pesquisar o CPF ou 2 para pesquisar o Email: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("\n Digite o CPF: ");
            scanf("%d", &cpfPesquisa);
            for (i = 0; i < totalContatos; i++)
            {
                if (cpf[i] == cpfPesquisa)
                {
                    printf("\nNome: %s\nEmail: %s\nCPF: %d\n", nome[i], email[i], cpf[i]);
                    break;
                }
            }
            break;
        case 2:
            printf("\nDigite o Email: ");
            scanf("%s", emailPesquisa);
            for (i = 0; i < totalContatos; i++)
            {
                if (strcmp(email[i], emailPesquisa) == 0)
                {
                    printf("\nNome: %s\nEmail: %s\nCPF: %d\n", nome[i], email[i], cpf[i]);
                }
            }

            break;
        default:
            printf("\n Opcao Invalida!");
            break;
        }
        printf("\nDigite 1 para continuar pesquisando: ");
        scanf("%d", &op);
    } while (op == 1);
} //Fim da Pesquisa
