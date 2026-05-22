/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Distância entre Ponteiros                              *
* Data - 21/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/
#include<stdio.h>

int main(){
    double array[10]={19.0, 21.0, 18, 27.0, 80, 11, 45.8, 10, 88.7, 15};

    double *p_inicio= &array[2];
    double *p_fim = &array[7];

    long int diferenca = p_fim - p_inicio;

    printf("Diferenca entre ponteiros %ld\n",diferenca);
/*O compilador calcula a diferença subtraindo
  o endereço de memória final pelo inicial 
  e dividindo o resultado pelo tamanho em bytes do
  tipo de dado.(p_fim - p_inicio) / 8 bytes.
  Por isso, o resultado indica a quantidade de elementos de
  distância em 5, e não a distância em 40 bytes.
*/

    printf("Elementos no intervalo:\n");
    
    for (double *i = p_inicio; i <= p_fim;i++){
        printf("Valor: %.1f , Endereco: %p\n",*i,(void*)i);
    }


    return 0; 
}

