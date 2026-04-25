//----------------------------------------------------------
//*                      FATEC Ipiranga                    *
//* Disciplina: Programaçao Estruturada e Modular          *
//* Prof. Veríssimo                                        *
//----------------------------------------------------------
//* Objetivo do Programa: Busca em profundidade            *
//*                (Ponteiro e Recursivo)                  *
//---------------------------------------------------------/
#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_PASTAS 10
#define LIMITE_ALERTA 300.0

int ciclos = 0;

typedef struct Pasta {
    char nome[50];
    float tamanho_proprio;
    float tamanho_total;
    struct Pasta* subpastas[10];
    int qtd_sub;
} Pasta;

float processarHierarquia(Pasta *p, int nivel_atual, int limite_profundidade) {
    ciclos++;
    if (p == NULL || nivel_atual > limite_profundidade) {
        ciclos++;
        return 0;
    }

    p->tamanho_total = p->tamanho_proprio;
  
    for (int i = 0; i < p->qtd_sub; i++) {
        p->tamanho_total += processarHierarquia(p->subpastas[i], nivel_atual + 1, limite_profundidade);
        ciclos++;
    }


    for (int i = 0; i < nivel_atual; i++) {
         printf("  ");
         ciclos++;
    }

    printf("|-- %s [%.2f GB]", p->nome, p->tamanho_total);

    if (p->tamanho_total > LIMITE_ALERTA) {
        printf(" [!] ALERTA: GARGALO DETECTADO");
        ciclos++;
    }

    printf("\n");
    return p->tamanho_total;
}

int main() {
    Pasta drive[MAX_PASTAS];
    clock_t t;
    t = clock();
    // RAIZ
    strcpy(drive[0].nome, "RAIZ");
    drive[0].tamanho_proprio = 10.0;
    drive[0].qtd_sub = 2;
    // Projetos_TI
    strcpy(drive[1].nome, "Projetos_TI");
    drive[1].tamanho_proprio = 50.0;
    drive[1].qtd_sub = 1;
    // Backups
    strcpy(drive[2].nome, "Backups_Antigos");
    drive[2].tamanho_proprio = 350.0;
    drive[2].qtd_sub = 0;
    // Videos
    strcpy(drive[3].nome, "Videos_Aulas");
    drive[3].tamanho_proprio = 280.0;
    drive[3].qtd_sub = 0;

    drive[0].subpastas[0] = &drive[1]; // RAIZ -> Projetos
    drive[0].subpastas[1] = &drive[2]; // RAIZ -> Backups
    drive[1].subpastas[0] = &drive[3]; // Projetos -> Videos

    int limite;
    printf("Defina o limite de profundidade do mergulho: ");
    scanf("%d", &limite);
    
    printf("\n--- RELATORIO DE HIERARQUIA INTELIGENTE ---\n");
    processarHierarquia(&drive[0], 0, limite); // passa ponteiro
    printf("-------------------------------------------\n");

    t = clock() - t;
    // Converte para segundos e exibe o resultado
     double tempo_execucao = ((double)t) / CLOCKS_PER_SEC;
     printf("Tempo de execucao: %f segundos", tempo_execucao);
     printf("\nCiclos processados: %d\n", ciclos);
    return 0;
}