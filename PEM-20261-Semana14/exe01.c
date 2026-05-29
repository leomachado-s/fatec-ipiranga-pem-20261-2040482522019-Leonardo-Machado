/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* calculadora de media ponderada                         *
* Data - 28/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/
#include<stdio.h>
int main(){

    double  media, nota1, nota2, nota3;
    int peso1, peso2, peso3;
    printf("Digite a 1 nota: ");
    scanf("%lf",&nota1);
    printf("\nDigite a 2 nota: ");
    scanf("%lf",&nota2);
    printf("\nDigite a 3 nota: ");
    scanf("%lf",&nota3);
    printf("\nDigite o 1 peso: ");
    scanf("%d",&peso1);
    printf("\nDigite o 2 peso: ");
    scanf("%d",&peso2);
    printf("\nDigite o 3 peso: ");
    scanf("%d",&peso3);

    media = (nota1*peso1 + nota2*peso2 + nota3*peso3)/(peso1+peso2+peso3);
    printf("A media ponderada e: %.2lf",media);
    printf("Valor de double: %d Bytes\n", (int)sizeof(double));
    printf("Valor de double: %d Bytes\n", (int)sizeof(int));
    return 0;
}