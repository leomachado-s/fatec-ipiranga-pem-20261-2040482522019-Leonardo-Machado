/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Sequencia de Collatz                                   *
* Data - 28/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/
#include<stdio.h>
int main(){
    int n=0, passos=0;
    while (n<=0){
        printf("Digite um numero inteiro positivo: ");
        scanf("%d",&n);
    }
    while(n!=1){
    if(n%2==0){
            n = n/2;
    }
    else{
            n = 3*n + 1;
        
    }
    printf("%d ", n);
    passos ++;
}
    
printf("\nNumero de passos: %d\n", passos);
    return 0;
}