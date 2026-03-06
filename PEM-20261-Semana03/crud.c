#include<stdio.h>
#include<string.h>
    struct Produto{
        int id;
        char nomeProduto[50];
    };
    int main(){
        struct Produto listaProduto[10];
        int i, opcao, codigo, encontrado;
        char esc;
        do{
        printf("-----------------------\n");
        printf("Menu\n");
        printf("Digite o numero da opcao de sua escolha.\n");
        printf("1-Inclusao\n");
        printf("2-Consulta\n");
        printf("3-Alteracao\n");
        printf("4-Exclusao\n");
        printf("5-Listar todos\n");
        printf("0-SAIR\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            for(i=0;i<10;i++){
                printf("\n---Cadastro dos Produtos---\n");
                printf("\nInforme o id do Produto: \n");
                scanf("%d",&listaProduto[i].id);
                printf("\nInforme o nome do produto: \n");
                scanf("%s",listaProduto[i].nomeProduto);
            }
            break;
        case 2:
            esc = 'A';
            encontrado = 0;
            do{
                printf("---Consulta dos Produtos---\n");
                printf("Digite o ID do produto: \n");
                scanf("%d",&codigo);
                for(i=0;i<10;i++){
                    if(listaProduto[i].id == codigo){
                        printf("\nO Produto [%.4s] esta na posicao %d .\n",listaProduto[i].nomeProduto,i+1);
                        encontrado = 1;
                    }
                }
                if(encontrado==0){
                    printf("\nProduto nao encontrado.\n");
                }
                printf("\nDeseja consultar outro produto?\n");
                printf("S/N: \n");
                scanf("%s",&esc);
            }while(esc!= 'N');
            break;
        case 3:
        esc = 'A';
        encontrado = 0;
            do{
                printf("---Alteracao dos Produtos---\n");
                printf("Digite o ID do produto: \n");
                scanf("%d",&codigo);
                for(i=0;i<10;i++){
                    if(listaProduto[i].id == codigo){
                        printf("Informe a alteracao a ser feita no ID do Produto %s: \n",listaProduto[i].nomeProduto);
                        scanf("%d", &listaProduto[i].id);
                        encontrado = 1;
                    }
                }
                if(encontrado==0){
                    printf("\nProduto nao encontrado.\n");
                }
                printf("\nDeseja alterar outro produto?\n");
                printf("S/N: \n");
                scanf("%s",&esc);
            }while(esc !='N');
            break;
        case 4:
            esc = 'A';
            encontrado = 0;
            do{
                printf("---Exclusao dos Produtos---\n");
                printf("Digite o ID do produto a ser excluido: \n");
                scanf("%d",&codigo);
                for(i=0;i<10;i++){
                    if(listaProduto[i].id == codigo){
                        listaProduto[i].id= 0;
                        listaProduto[i].nomeProduto[0]="\0";
                        //strcpy(listaProduto[i].nomeProduto, "");
                        printf("Produto excluido com sucesso\n");
                        encontrado = 1;
                    }
                }
                if(encontrado==0){
                    printf("\nProduto nao encontrado.\n");
                }
                printf("\nDeseja excluir outro produto?\n");
                printf("S/N: \n");
                scanf("%s",&esc);
            }while(esc !='N');
            break;
        case 5:
            printf("---Listagem dos Produtos Cadastrados---\n");
            for(i=0;i<10;i++){
                if(listaProduto[i].id== 0){
                    i++;
                }
                else{
                printf("ID: %d , Nome: %s \n",listaProduto[i].id, listaProduto[i].nomeProduto);
                }
            }
            break;
        default:
            printf("Opcao invalida escolha entre 0 e 5\n");
            break;
        }


        }while(opcao != 0);
    return 0;
    }