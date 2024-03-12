#include <stdio.h>
#include <stdlib.h>


int menu_tela_princinpal();

int main(){
    int opcao=-1;
    do{
        opcao=menu_tela_princinpal();
    }while (opcao!=0);
    return 0;
}

int menu_tela_princinpal(void){
    system("clear||cls");

    int opcao;
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            ===================================================          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///                  = = = =   Locadora de Roupa     = = = =                ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            ===================================================          ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                 = = = = =    Gestao de LdR   = = = = =                  ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Sobre                                                     ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///            Escolha a opcaoo desejada: ");
    scanf("%d", &opcao);
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");

    switch (opcao)
    {
    case 1:
        printf("Entrou");
        break;
    
    default:
        break;
    }
    return 0;
}