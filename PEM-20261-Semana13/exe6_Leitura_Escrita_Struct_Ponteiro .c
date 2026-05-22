/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Leitura e Escrita de Struct via Ponteiro               *
* Data - 21/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/
#include<stdio.h>
#include<string.h>

struct Produto{
 char nome[40];
 float preco;
 int estoque;
};

int main(){
    struct Produto um_produto;
    struct Produto *prt = &um_produto;

    (*prt).estoque = 50;
    (*prt).preco = 11.50;
    snprintf((*prt).nome,sizeof((*prt).nome),"Pepsi");

    printf("Ponteiro com (*) e (.)\n");
    printf("Nome do produto: %s\n",(*prt).nome);
    printf("Quantidade em estoque: %d\n",(*prt).estoque);
    printf("Preco: %.2f\n", (*prt).preco);


    prt->estoque = 40;
    prt->preco = 12.50;
    snprintf(prt->nome,sizeof(prt->nome),"Fanta");

  
    printf("\nPonteiro com (->)\n");
    printf("Nome do produto: %s\n",prt->nome);
    printf("Quantidade em estoque: %d\n",prt->estoque);
    printf("Preco: %.2f\n", prt->preco);

    return 0;
}