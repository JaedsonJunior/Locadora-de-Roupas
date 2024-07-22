#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"
#include "ultilidade.h"
#include "validacao.h"
#include "guardar.h"


int tela_menu_cliente(void) {
    int opC;
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
    printf("///            = = = = = = = = =  Menu cliente = = = = = = = =              ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Cadastrar um novo cliente                                 ///\n");
    printf("///            2. Pesquisar os dados de um cliente                          ///\n");
    printf("///            3. Atualizar os dados de um cliente                          ///\n");
    printf("///            4. Excluir um cliente do sistema                             ///\n");
    printf("///            0. Voltar ao menu anterior                                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            Escolha a opcao desejada: ");
    scanf("%d",&opC);
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    limparBuffer();
    switch (opC) {
            case 1:
                tela_cadastrar_cliente();
                break;
            case 2:
                tela_pesquisar_cliente();
                break;
            case 3:
                tela_alterar_cliente();
                break;
            case 4:
                tela_excluir_cliente();    
                break;
            case 0:
                printf("saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
                break;
        }

return opC;        
}


Cliente* tela_cadastrar_cliente(void) {
    Cliente *aln;
	aln = (Cliente*) malloc(sizeof(Cliente));
    
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
    printf("///            = = = = = = = = Cadastrar Cliente = = = = = = = =            ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    do {
		printf("///            Informe o CPF (apenas numeros): ");
		scanf("%12s]", aln->cpf);
        limparBuffer();
	} while (valida_cpf_cliente_cadastro(aln->cpf)!=0);
       
    
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
   
    salvar_cliente(aln);
    limparBuffer();
    return aln;
    
}
    


void tela_pesquisar_cliente() {
    char cpf[12];
    system("clear||cls");

    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            ===================================================          ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///                    = = = =  Fragancia Popular    = = = =                ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
    printf("///            ===================================================          ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///            = = = = = = = = Pesquisar Cliente = = = = = = = =            ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    do {
		printf("///            Informe o CPF (apenas numeros): ");
		scanf("%[^\n]",cpf);
		limparBuffer();
	} while (!valida_cpf_cliente_pesquisa(cpf));
    system("clear||cls");

    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    pesquisar_cliente(cpf);
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    limparBuffer();
}


void tela_alterar_cliente(void) {
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
    printf("///                = = = = = = Alterar cliente = = = = = =                  ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///    CPF:                                                                 ///\n");
    scanf("%s",cpf);
    limparBuffer();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
}




void tela_excluir_cliente(void) {
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
    printf("///                = = = = = = Excluir cliente = = = = = =                  ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///   CPF:                                                                  ///\n");
    scanf("%s",cpf);
    limparBuffer();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    
}





void pesquisar_cliente(const char *cpf) {
    FILE *arquivo = fopen("clientes.bin", "rb");

    if (arquivo != NULL) {
        Cliente cliente;

        int encontrado = 0; // Flag para indicar se o cliente foi encontrado

        while (fread(&cliente, sizeof(Cliente), 1, arquivo) == 1) {
            // Compara o CPF do cliente atual com o CPF desejado
            if (strcmp(cliente.cpf, cpf) == 0) {
                printf("Cliente encontrado:\n");
                printf("CPF: %s\n", cliente.cpf);
                printf("NOME: %s\n", cliente.nome);
                printf("EMAIL: %s\n", cliente.email);
                printf("DATA: %s\n", cliente.data);
                printf("TELEFONE: %s\n", cliente.fone);
                printf("SITUACAO: %c\n", cliente.situacao);
                
                
                encontrado = 1;
                break; // Se encontrou, sai do loop
            }
        

            else if(!encontrado) {
                printf("Cliente com CPF %s nao encontrado.\n", cpf);
        }}

        fclose(arquivo);
    } else {
        printf("Erro ao abrir o arquivo para leitura.\n");
    }
}

int compara_cpf_cliente_cadastro(const char *cpf) {
    FILE *arquivo = fopen("clientes.bin", "rb");

    if (arquivo != NULL) {
        Cliente cliente;

        int encontrado = 0; // Flag para indicar se o cliente foi encontrado

        while (fread(&cliente, sizeof(Cliente), 1, arquivo) == 1) {
            // Compara o CPF do cliente atual com o CPF desejado
            if (strcmp(cliente.cpf, cpf) == 0) {
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


int valida_cpf_cliente_cadastro(const char *cpf) {
    FILE *arquivo = fopen("clientes.bin", "rb");
    int x;
    x = validarCPF(cpf);
    if (x==1){
        if (arquivo != NULL){
            fclose(arquivo);
            return compara_cpf_cliente_cadastro(cpf);
            
            }
        else{
            return 0;
        }

        
    }else 
    {
       printf("CPF invalido.");
       return 1;
    };
    
    return compara_cpf_cliente_cadastro(cpf);
}


int valida_cpf_cliente_pesquisa(const char *cpf) {
    FILE *arquivo = fopen("clientes.bin", "rb");
    int x;
    x = validarCPF(cpf);
    if (x==1){
        if (arquivo != NULL){
            fclose(arquivo);
            return compara_cpf_cliente_pesquisa(cpf);
            
            }
        else{
            return 0;
        }

        
    }else 
    {
       printf("CPF invalido.");
       return 0;
    };
    
    return compara_cpf_cliente_pesquisa(cpf);

}


int compara_cpf_cliente_pesquisa(const char *cpf) {
    FILE *arquivo = fopen("clientes.bin", "rb");

    if (arquivo != NULL) {
        Cliente cliente;

        while (fread(&cliente, sizeof(Cliente), 1, arquivo) == 1) {
            // Compara o CPF do cliente atual com o CPF desejado
            if (strcmp(cliente.cpf, cpf) == 0) {
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