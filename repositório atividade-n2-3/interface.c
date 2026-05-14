/*--------------------------------------------------------------------*
  -Nome: Leonardo da Silva Machado - RA:2040482522019                 |
  -Fatec Ipiranga - Ads Vespertino                                    |
  -Atividade PEM - semana 9 - Dia 15/05/2026                          |
  -Objetivo: Explorar a Modularização através da criação de           |
  -bibliotecas personalizadas (arquivos.h e .c) e a aplicação de      |
  -Recursividade para a resolução de problemas matemáticos,garantindo |
  -a separação entre lógica de processamento e interface de usuário.  |         
  *------------------------------------------------------------------*/
#include "interface.h"
#include "recursao.h"
#include <stdio.h>

int menu(){
    int escolha, bas, pot, loop = 0;
    do{
    escolha = 0;
    printf("--------Menu--------\n");
    printf("1-Decimal p/ Binario\n2-Potencia\n3-Soma Digitos\n0-Sair\n--------------------\n");
    scanf("%d",&escolha);
    switch (escolha)
    {
    case 1:
        printf("Digite o numero decimal a ser transformado em binario: ");
        scanf("%d",&escolha);
        printf("O numero em binario e: ");
        decToBin(escolha);
        printf("\n");
        break;
    case 2:
        printf("Digite a base e a potencia: ");
        scanf("%d %d",&bas,&pot);
        printf("A potencia %d sobre %d e:%d\n",bas, pot, potencia(bas,pot));
        break;
    case 3:
        printf("Digite um numero inteiro qualquer: ");
        scanf("%d",&escolha);
        printf("A soma dos digitos e:%d\n",somaDigitos(escolha));
        break;
    case 0:
        loop ++;
        break;
    default:
        printf("Operacao invalida");
        break;
    }
    printf("Deseja realizar outra operacao? 1-sim / 2-nao: ");
    scanf("%d",&escolha);
    if(escolha==2){
        loop = 1;
    }
}while(loop==0);
}