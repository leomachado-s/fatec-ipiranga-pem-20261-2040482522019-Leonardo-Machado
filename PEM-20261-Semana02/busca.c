#include<stdio.h>
int main(){
    int busca, flagEncontrou =0;
    int valores [6]= {21, 25, 32, 44, 55, 66};
    printf("Informe o valor procurado: ");
    scanf("%d",&busca);
    for (int i =0; i<6; i++){
        if(valores[i]==busca){
            printf("O valor %d esta na posicao %d",busca, i+1);
            flagEncontrou = 1;
            break;
        }
    }
    if(flagEncontrou== 0){
        printf("o valor %d nao foi encontrado",busca);
    }
    return 0;
}