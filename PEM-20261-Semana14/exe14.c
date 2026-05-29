/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:                                  *
* Calculadora Modular com Menu                           *
* Data - 28/05/2026                                      * 
* Autor: Leonardo machado;RA:2040482522019               *                                                                    
*--------------------------------------------------------*/
#include<stdio.h>
#include <stdlib.h>

int mdc(int a, int b);
long long potencia(int base, int expoente);
int ehPrimo(int n);
char* decimalParaBinario(int n);

int main() {
    int opcao;

    do {
        printf("\n===================================\n");
        printf("       MENU DE OPERACOES           \n");
        printf("===================================\n");
        printf("1. Maximo Divisor Comum (MDC)\n");
        printf("2. Potencia Inteira\n");
        printf("3. Verificar Numero Primo\n");
        printf("4. Converter Decimal para Binario\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                int a, b;
                printf("\n[MDC] Digite dois numeros inteiros: ");
                scanf("%d %d", &a, &b);
                printf("O MDC entre %d e %d eh: %d\n", a, b, mdc(a, b));
                break;
            }
            case 2: {
                int base, expoente;
                printf("\n[POTENCIA] Digite a base e o expoente (inteiros): ");
                scanf("%d %d", &base, &expoente);
                if (expoente < 0) {
                    printf("Erro: Este programa suporta apenas expoentes nao-negativos.\n");
                } else {
                    printf("%d elevado a %d eh: %lld\n", base, expoente, potencia(base, expoente));
                }
                break;
            }
            case 3: {
                int n;
                printf("\n[PRIMO] Digite um numero inteiro: ");
                scanf("%d", &n);
                if (ehPrimo(n)) {
                    printf("O numero %d eh PRIMO.\n", n);
                } else {
                    printf("O numero %d NAO eh primo.\n", n);
                }
                break;
            }
            case 4: {
                int n;
                printf("\n[BINARIO] Digite um numero decimal inteiro positivo: ");
                scanf("%d", &n);
                if (n < 0) {
                    printf("Erro: Digite um numero maior ou igual a zero.\n");
                } else {
                    char *binario = decimalParaBinario(n);
                    printf("O numero %d em binario eh: %s\n", n, binario);
                    free(binario); // Libera a memória alocada dinamicamente pela função
                }
                break;
            }
            case 0:
                printf("\nSaindo do programa. Ate logo!\n");
                break;
            default:
                printf("\nOpcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}

/**
 * brief Calcula o Máximo Divisor Comum (MDC) usando o algoritmo de Euclides.
 * para a Primeiro número inteiro.
 * para b Segundo número inteiro.
 * return int O valor do MDC entre 'a' e 'b'.
 * o número de divisões cresce de forma logarítmica em relação ao menor número.
 */
int mdc(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

/**
 * Calcula a potência de um número inteiro (base^expoente) sem usar pow().
 * para base o número inteiro que será multiplicado.
 * para expoente o número de vezes que a base será multiplicada por ela mesma (deve ser >= 0).
 * return long o resultado de base elevado ao expoente.
 * O laço executa exatamente 'expoente' vezes de forma linear.
 */
long long potencia(int base, int expoente) {
    long long resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

/**
 * Verifica se um número inteiro é primo.
 * para n o número inteiro a ser testado.
 * return int Retorna 1 se for primo, ou 0 caso contrário.
 * O (sqrt(n)) - Em vez de testar até n-1, testa apenas
 * até a raiz quadrada de n. Se houver um divisor, ele obrigatoriamente aparecerá 
 * antes ou na raiz quadrada.
 */
int ehPrimo(int n) {
    if (n <= 1) return 0; 
    if (n == 2) return 1; 
    if (n % 2 == 0) return 0; 

    
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1;
}

/**
 * Converte um número decimal inteiro positivo em uma string binária.
 * para n o número decimal inteiro (deve ser >= 0).
 * return char* Ponteiro para a string gerada contendo o código binário.
 * A memória é alocada via malloc e deve ser liberada com free().
 * (log n) - O número de divisões por 2 necessário
 * para converter um número decimal em binário é proporcional ao logaritmo do número na base 2.
 */
char* decimalParaBinario(int n) {
    // Um inteiro de 32 bits gera no máximo 32 caracteres + 1 para o '\0'
    int capacidade = 33;
    char *resultado = (char*) malloc(capacidade * sizeof(char));
    
    if (resultado == NULL) {
        printf("Erro de alocacao de memoria.\n");
        exit(1);
    }

    // Tratamento especial para o caso do número ser zero
    if (n == 0) {
        resultado[0] = '0';
        resultado[1] = '\0';
        return resultado;
    }

    int i = 0;
    // Realiza as divisões sucessivas e armazena os restos (os bits ficam invertidos)
    while (n > 0) {
        resultado[i] = (n % 2) + '0'; // Converte o resto 0 ou 1 para caractere '0' ou '1'
        n = n / 2;
        i++;
    }
    resultado[i] = '\0'; // Finaliza a string

    // Inverte a string para que os bits fiquem na ordem correta (leitura da esquerda para a direita)
    int inicio = 0;
    int fim = i - 1;
    while (inicio < fim) {
        char temp = resultado[inicio];
        resultado[inicio] = resultado[fim];
        resultado[fim] = temp;
        inicio++;
        fim--;
    }

    return resultado;
}