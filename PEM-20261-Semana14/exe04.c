/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Validador de triangulos e Classificação                *
* Data - 28/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/
#include<stdio.h>
int main(){
    float lado_a, lado_b, lado_c;

    printf("Digite o primeiro lado: ");
    scanf("%f", &lado_a);
    printf("\nDigite o segundo lado: ");
    scanf("%f", &lado_b);
    printf("\nDigite o terceiro lado: ");
    scanf("%f", &lado_c);

    if(lado_a + lado_b > lado_c && lado_a + lado_c > lado_b && lado_b + lado_c > lado_a){
        if(lado_a == lado_b && lado_b == lado_c){
             // Todos os três lados iguais
            printf("E um triangulo Equilatero. \n");
        }
        else if(lado_a == lado_b || lado_a == lado_c || lado_b == lado_c){
            // se dois lados forem iguais é isosceles
            printf("E um triangulo Isosceles.\n");
        }
        else{
            // se não for nenhum dos anteriores entao tem tres lados diferentes
            printf("E um triangulo Escaleno.\n");
        }
    }
    else {
        // Se a soma de dois lados for menor ou igual ao terceiro, o triângulo é inválido
        printf("Os valores digitados NAO formam um triangulo.\n");
    }

      
        // identificar qual é o maior lado da hipotenusa 
        float maior_quadrado, soma_quadrados_restantes;

        if (lado_a >= lado_b && lado_a >= lado_c) {
            // se 'a' é o maior lado
            maior_quadrado = lado_a * lado_a;
            soma_quadrados_restantes = (lado_b * lado_b) + (lado_c * lado_c);
        } 
        else if (lado_b >= lado_a && lado_b >= lado_c) {
            // se 'b' é o maior lado
            maior_quadrado = lado_b * lado_b;
            soma_quadrados_restantes = (lado_a * lado_a) + (lado_c * lado_c);
        } 
        else {
            // se 'c' é o maior lado
            maior_quadrado = lado_c * lado_c;
            soma_quadrados_restantes = (lado_a * lado_a) + (lado_b * lado_b);
        }

        // Agora aplicada o pitagóricas 
        if (maior_quadrado == soma_quadrados_restantes) {
            // Teorema de Pitágoras: A^2 = B^2 + C^2
            printf("Classificado por angulos como: Retangulo\n");
        } 
        else if (maior_quadrado > soma_quadrados_restantes) {
            // O quadrado do maior lado supera a soma dos outros: ângulo obtuso (> 90°)
            printf("Classificado por angulos como: Obtusangulo\n");
        } 
        else {
            // O quadrado do maior lado é menor que a soma dos outros: todos os ângulos agudos (< 90°)
            printf("Classificado por angulos como: Acutangulo\n");
        }

    return 0;
}