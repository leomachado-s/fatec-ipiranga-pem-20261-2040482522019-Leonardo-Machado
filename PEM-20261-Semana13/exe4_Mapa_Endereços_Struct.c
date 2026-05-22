/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Mapa de Endereços de um Struct                         *
* Data - 21/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *
*--------------------------------------------------------*
* Os endereços são consecutivos, pois o compilador pega  *
* o tamanho de cada tipo de variavel e soma,             *
* por exemplo char é 1 bytes, mas foi declarado espaço   *
* de 50, logo 50 bytes, depois disso o compilador pega   *
* o proximo tipo de variavel, que no caso seria o        *
* int que tem espaço na memoria de 4 bytes,depois float, *
* e por fim o compilador atribui uma quantidade que seja *
* multipla de 4.                                         *                                                                     
*--------------------------------------------------------*/


#include<stdio.h>
#include<string.h>
struct aluno
{
    char nome [50];
    int matricula;
    float media;
};
int main(){

    struct aluno um_aluno;

    um_aluno.matricula = 2131;
    um_aluno.media = 9.8;
    snprintf(um_aluno.nome, sizeof(um_aluno.nome),"Leonardo da Silva Machado");

    printf("Nome do aluno:  %p\n",(void*)&um_aluno.nome);
    printf("matricula:      %p\n",(void*)&um_aluno.matricula);
    printf("Media do aluno: %p\n",(void*)&um_aluno.media);  

    printf("Tamanho real da struct na memoria: %zu bytes", sizeof(struct aluno));
}
