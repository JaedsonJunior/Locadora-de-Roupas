#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"
#include "funcionario.h"
#include "produto.h"
#include "ultilidade.h"
#include "mdvenda.h"
#include "relatorio.h"
#include "sobre.h"
int menu_tela_principal();

int main(){
    int opcao=-1;
    do{
        opcao=menu_tela_principal();
    }while (opcao!=0);

    return 0;
}

int menu_tela_principal(void){
    system("clear||cls");
    int opcao;
    int opcaoCl;
    int opcaoC2;
    int opcaoC3;
    int opcaoC4;
    int opcaoC5;
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            ===================================================          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///                  = = = =   Supply clother    = = = =                    ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            ===================================================          ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                 = = = = =    Gestao de LdR   = = = = =                  ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Cliente                                                   ///\n");
    printf("///            2. Funcionario                                               ///\n");
    printf("///            3. Produto                                                   ///\n");
    printf("///            4. Venda                                                     ///\n");
    printf("///            5. Relatorio                                                 ///\n");
    printf("///            6. Sobre                                                     ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///            Escolha a opcaoo desejada: ");
    scanf("%d", &opcao);
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    limparBuffer();
    switch (opcao)
    {
    case 1:
        do
            {
            opcaoCl=tela_menu_cliente(); 
            } while (opcaoCl!=0);
            break;
    case 2:
        do
            {
            opcaoC2=tela_menu_funcionario(); 
            } while (opcaoC2!=0);
            break;
    case 3:
        do
            {
            opcaoC3=tela_menu_produto(); 
            } while (opcaoC3!=0);
            break;
    case 4:
        do
            {
            opcaoC4=tela_menu_venda(); 
            } while (opcaoC4!=0);
            break;        
    case 5:
        do
            {
            opcaoC5=relatorios(); 
            } while (opcaoC5!=0);
            break;
    case 6:
             mostrar_sobre();
            break;        
    case 0:
        printf("Saindo...");
        break;    
    default:
        printf("Opcao invalida\n");
        break;
    }

return opcao;
}