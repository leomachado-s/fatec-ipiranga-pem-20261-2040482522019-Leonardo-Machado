/**-------------------------------------------
* -Nome: Leonardo da Silva Machado - RA:2040482522019
  -Fatec Ipiranga - Ads Vespertino 
  -Atividade PEM - semana 4 - Dia 12/03/2026
  -Objetivo: Desenvolva um programa que deve implementar um simulador do clássico "Jogo da Velha"para dois jogadores
(’X’ e ’O’). O programa deve gerenciar um tabuleiro de 3 × 3, alternar turnos, validar
jogadas e verificar condições de vitória ou empate (velha).*           
  *-------------------------------------------*/
#include<stdio.h>
#include <ctype.h>
int main(){
    int i,j,l,c,x=0,o=0, cont, vencedor = 0, jogadas = 0, valido;
    char matriz[3][3],simbolo, jogador_atual, play1, play2;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matriz[i][j]= ' ';
        }
    }
    printf("Jogador 1 escolha X ou O:");
    scanf(" %c",&simbolo);
    
    // passa o caractere para maiusculo.
    simbolo = toupper(simbolo);
    
    //testa se se o simbolo é valido
    if(simbolo != 'X' && simbolo != 'O'){
        do{
            printf("\nSimbolo invalido, escolha entre X ou O: ");
            scanf(" %c",&simbolo);
            simbolo = toupper(simbolo);
        }while(simbolo != 'X' && simbolo != 'O');
    }
    play1 = simbolo;
    if(play1 == 'X'){
        play2 = 'O';
    }
    else{
        play2 = 'X';
    }
    
    cont = 1;   
    
    do{
        if(cont>2){
        cont = 1;
        }
        do{
        printf("\nJogador %d, Digite as cordenadas entre [3x3]:  \n",cont);
        do{
        valido = scanf(" %d%d",&l,&c);
            if(valido != 2){
            printf("Entrada inválida. As Coordenadas devem ser numericas entre [3x3]:\n");
            while (getchar() != '\n'); // Limpa buffer
        }
        }while(valido != 2);
    
        if(l<1 || l>3 || c<1 || c>3){
            printf("Coordenadas invalidas!!!");
        }
        }while(l<1 || l>3 || c<1 || c>3);
        if(cont == 1){
            jogador_atual = play1; 
        }
        else{
            jogador_atual = play2;
        }
        
        
        if(matriz[l-1][c-1]==play1 || matriz[l-1][c-1]==play2){
            printf("\nPosicao ja ocupada...\n");
        }
        else{
            matriz[l-1][c-1]= jogador_atual;
            cont++;
            jogadas++;
            //imprime o jogo
            for(i=0;i<3;i++){
                printf(" %c | %c | %c \n", matriz[i][0], matriz[i][1], matriz[i][2]);

                if(i < 2){
                    printf("---+---+---\n");
                }
            }
            
        }
            
        //teste de vencedor por linha 
        for(i=0;i<3;i++){
           for(j=0;j<3;j++){ 
               if(matriz[i][j]=='X'){
                  x++; 
               }
               else if(matriz[i][j]=='O'){
                 o++;  
               }
           
           }
           if(x == 3 || o == 3){
               if(x>o){
                    if(play1 =='X'){
                      vencedor = 1;
                    }
                    else{
                      vencedor = 2;
                    }
                }
                else{
                    if(x<o){
                        if(play1 =='X'){
                            vencedor = 1;
                        }
                        else{
                            vencedor = 2;
                        }
                    }
                }
            }
            x =0;
            o =0;
        }
         //teste de vencedor por coluna
        for(j=0;j<3;j++){
           for(i=0;i<3;i++){ 
               if(matriz[i][j]=='X'){
                  x++; 
               }
               else if(matriz[i][j]=='O'){
                 o++;  
               }
           
           }
           if(x == 3 || o == 3){
               if(x>o){
                    if(play1 =='X'){
                      vencedor = 1;
                    }
                    else{
                      vencedor = 2;
                    }
                }
                else{
                    if(x<o){
                        if(play1 =='X'){
                            vencedor = 1;
                        }
                        else{
                            vencedor = 2;
                        }
                    }
                }
            }
            x =0;
            o =0;
        }
        //teste de vencedor pela diagonal principal
        if((matriz[0][0] == 'X' && matriz[1][1] == 'X' && matriz[2][2] == 'X') ||
        (matriz[0][0] == 'O' && matriz[1][1] == 'O' && matriz[2][2] == 'O')){
            if(matriz[0][0] ==play1){
                      vencedor = 1;
                    }
                    else{
                      vencedor = 2;
                    }
        }
        //teste de vencedor pela diagonal secundaria
        if((matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X') ||
        (matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[2][0] == 'O')){
            if(matriz[0][2] ==play1){
                      vencedor = 1;
                    }
                    else{
                      vencedor = 2;
                    }
        }
    }while(vencedor== 0 && jogadas <9);
    if(vencedor != 0){
        printf("\n jogador [%d] venceu!",vencedor);
    }
    else{
        printf("\n O jogo terminou em empate.(Deu Velha)!");
    }
    return 0;
}
