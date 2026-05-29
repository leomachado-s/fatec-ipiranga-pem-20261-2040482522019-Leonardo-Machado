/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Tabuada interativa com Controle de Fluxo               *
* Data - 28/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/
#include<stdio.h>
#include<ctype.h>

int main(){
    char opcao;
    int i,j;
    do{
        for(i=1;i<=10;i++){
            j= 1;
            while (j<=10)
            {
                printf("%d X %d = %d\n",i,j, i*j);
                j++;
            }
            if(i==10){
            opcao = 'N';
            break;
            }
            do{
                printf("\nDeseja ver a tabuada do %d, 'S'/'N': ",i+1);
                scanf(" %c",&opcao);
                opcao = toupper(opcao);
            }while(opcao != 'S' && opcao != 'N');
            if(opcao == 'N'){
                break;
            }
        }

    }while(opcao != 'N');
    return 0;
}