#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcionario.h"
#include "ultilidade.h"
#include "validacao.h"
#include "guardar.h"


int tela_menu_funcionario(void) {
    int op;
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            ===================================================          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///                  = = = =   ?????????????????     = = = =                ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            ===================================================          ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///            = = = = = = = = =  Menu Funcionario = = = = = = = = =        ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Cadastrar um novo Funcionario                             ///\n");
    printf("///            2. Pesquisar os dados de um Funcionario                      ///\n");
    printf("///            3. Atualizar o cadastro de um Funcionario                    ///\n");
    printf("///            4. Excluir um Funcionario do sistema                         ///\n");
    printf("///            0. Voltar ao menu anterior                                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            Escolha a opcao desejada: ");
    scanf("%d",&op);
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    switch (op) {
            case 1:
                tela_cadastrar_funcionario();
                break;
            case 2:
                tela_pesquisar_funcionario();
                break;
            case 3:
                tela_alterar_funcionario();
                break;
            case 4:
                tela_excluir_funcionario();    
                break;
            case 0:
                printf("saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
                break;
        }

return op;   
    
}

Funcionario* tela_cadastrar_funcionario(void) {
    Funcionario *aln;
	aln = (Funcionario*) malloc(sizeof(Funcionario));
    
    system("clear||cls");

    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            ===================================================          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///                  = = = =   Fragancia Popular     = = = =                ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            ===================================================          ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///            = = = = = = = = Cadastrar funcionario = = = = =              ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
     printf("///                                                                         ///\n");
    do {
		printf("///            Informe o CPF (apenas numeros): ");
		scanf("%12s]", aln->cpf);
        limparBuffer();
	} while (valida_cpf_funcionario_cadastro(aln->cpf)!=0);
       
    
    do {
		printf("///            Nome completo: ");
		scanf("%61s", aln->nome);
		limparBuffer();
	} while (!validaNome(aln->nome));

     do {   
		printf("///            email: ");
		scanf("%61s", aln->email);
		limparBuffer();
	} while (!validaEmail(aln->email));

    
     do {
		printf("///            Data de Nascimento (dd/mm/aaaa): ");
		scanf(("%11[0-9/]"),aln->data);
		limparBuffer();
	} while (!valida_data(aln->data));
    

   
     do {
		printf("///            Celular (DDD): ");
		scanf("%[^\n]", aln->fone);
		limparBuffer();
	} while (!validaFone(aln->fone));


    aln->situacao = 'A';
    

    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
   
    salvar_funcionario(aln);
    limparBuffer();
    return aln;
    
}


void tela_pesquisar_funcionario(void) {
    char cpf [15];
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            ===================================================          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///                    = = = =  ?????????????????    = = = =                ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            ===================================================          ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///            = = = = = = = = Pesquisar funcionario = = = = =              ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///    CPF:                                                                 ///\n");
    printf("///  cpf:                                                                   ///\n");
    scanf("%s",cpf);
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
}



void tela_alterar_funcionario(void) {
    char cpf [15];
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            ===================================================          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///                 = = = =   ?????????????????     = = = =                 ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            ===================================================          ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///            = = = = = = = = Alterar funcionario = = = = = =              ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///    CPF:                                                                 ///\n");
    printf("///  cpf:                                                                   ///\n");
    scanf("%s",cpf);
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
}




void tela_excluir_funcionario(void) {
    char cpf[15];
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            ===================================================          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///                  = = = =   ?????????????????     = = = =                ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            ===================================================          ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///            = = = = = = = = Excluir funcionario = = = = = =              ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///   CPF:                                                                  ///\n");
    printf("///  cpf:                                                                   ///\n");
    scanf("%s",cpf);
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    
}





int valida_cpf_funcionario_cadastro(const char *cpf) {
    FILE *arquivo = fopen ("funcionario.bin","rb");
    int x;
    x = validarCPF(cpf);
    if (x==1){
       if (arquivo != NULL){
            fclose(arquivo);
            return compara_cpf_funcionario_cadastro(cpf);
            
            }
        else{
            return 0;
        }

        
    }else 
    {
       printf("CPF invalido.");
       return 0;
    };
    
    return compara_cpf_funcionario_cadastro(cpf);
}


int valida_cpf_funcionario_pesquisa(const char *cpf) {
    FILE *arquivo = fopen ("funcionario.bin","rb");
    int x;
    x = validarCPF(cpf);
    if (x==1){
       if (arquivo != NULL){
            fclose(arquivo);
            return compara_cpf_funcionario_pesquisa(cpf);
            
            }
        else{
            return 0;
        }

        
    }else 
    {
       printf("CPF invalido.");
       return 0;
    };
    
    return compara_cpf_funcionario_pesquisa(cpf);
}

int compara_cpf_funcionario_cadastro(const char *cpf) {
    FILE *arquivo = fopen("funcionario.bin", "rb");

    if (arquivo != NULL) {
        Funcionario funcionario;

        int encontrado = 0; // Flag para indicar se o cliente foi encontrado

        while (fread(&funcionario, sizeof(Funcionario), 1, arquivo) == 1) {
            // Compara o CPF do cliente atual com o CPF desejado
            if (strcmp(funcionario.cpf, cpf) == 0) {
                printf("\nCPF cadastrado.\n");
                encontrado = 1;
                break; // Se encontrou, sai do loop
            }
        }

        fclose(arquivo);
        return encontrado;
    } else {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 0; // Retorna 0 se houver erro ao abrir o arquivo
    }
}

int compara_cpf_funcionario_pesquisa(const char *cpf) {
    FILE *arquivo = fopen("funcionario.bin", "rb");

    if (arquivo != NULL) {
        Funcionario funcionario;

        while (fread(&funcionario, sizeof(Funcionario), 1, arquivo) == 1) {
            // Compara o CPF do cliente atual com o CPF desejado
            if (strcmp(funcionario.cpf, cpf) == 0) {
                return 1;
                
            }
        }

        fclose(arquivo);
        return 0;
    } else {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 0; // Retorna 0 se houver erro ao abrir o arquivo
    }
}
