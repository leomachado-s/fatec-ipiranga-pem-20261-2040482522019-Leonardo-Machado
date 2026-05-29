/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Classificação do IMC                                   *
* Data - 28/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/
#include<stdio.h>
 int main(){

    float IMC, kg, altura;
    printf("Digte seu peso: ");
    scanf("%f",&kg);
    printf("\nDigite sua altura: ");
    scanf("%f",&altura);

    if(kg <= 0 || altura <= 0){
        printf("Valores invalidos");
    }
    else{
        IMC = kg / (altura * altura);
    }
    
    if (IMC <18.5){
        printf("Abaixo do peso, IMC: %.2f",IMC);
    }
    else if (IMC>=18.5 && IMC <25){
        printf("Peso normal, IMC: %.2f",IMC);
    }
    else if (IMC>=25 && IMC <30){
        printf("Sobrepeso, IMC: %.2f",IMC);
    }
    else{
        printf("Obesidade, IMC: %.2f",IMC);
    }
    return 0;
 }