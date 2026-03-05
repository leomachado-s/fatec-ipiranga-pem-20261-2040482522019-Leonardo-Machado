//contador de palavras
#include <stdio.h>
#include <string.h>

int main(){
    char frase [50];
    int tamanho, i, contPalavras = 1;
    //entrada de dados
    /*entrada 
        de
      dados*/
    printf("Digite a frase completa: ");
    fgets(frase,50,stdin);
    //remove o \n (enter)
    frase[strcspn(frase,"\n")]= '\0';
    
    //obter o tamanho da frase (qtd.bytes)
    tamanho = strlen(frase);
    for(i=1; i<tamanho; i++){
        if(frase[i]==' '){
            if(frase[i +1] != ' ');{
                contPalavras +=1;
            }
        }
    }
    printf("A frase tem %d Palavras",contPalavras);
    return 0;
}
