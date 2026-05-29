/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* conversor de unidade com Overflow Controlado           *
* Data - 28/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/
#include<stdio.h>

int main(){
    /* int foi usado porque a distância em centímetros
     será armazenada como número inteiro.
    O limite citado no exercício cabe em um int.
    */
    int centimetros;
    /* float foi usado para metros porque a conversão
     pode gerar casas decimais.
     */
    float metros;
    /*double foi usado para quilômetros e milhas
    por oferecer maior precisão em valores decimais.
    */
    double quilometros, milhas;

    printf("Digite um valor em centimetros:  ");
    scanf("%d",&centimetros);
    if(centimetros<=0){
        printf("erro valor invalido");
    }
    else{
        metros = centimetros /100;
        quilometros = metros/1000;
        milhas = quilometros/1.60934;
        printf("\nO valor em metros e: %.2f\n",metros);
        printf("O valor em kilometros e: %.2lf\n",quilometros);
        printf("O valor em milhas e: %.2lf\n",milhas);
    }



    return 0;
}