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
    printf("///                  = = = =   Supply clother    = = = =                    ///\n");
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
    printf("///            5. Listar Funcionarios                                       ///\n");
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
             case 5:
                tela_exibir_funcionario();    
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
    printf("///                  = = = =   Supply clother    = = = =                    ///\n");
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
    free(aln);
    
}


void tela_pesquisar_funcionario(void) {
    char cpf[12];
    system("clear||cls");

    printf("\n");
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
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///            = = = = = = = = Pesquisar funcionario = = = = =              ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    limparBuffer();
   do {
		printf("///            Informe o CPF (apenas numeros): ");
		scanf("%[^\n]",cpf);
		limparBuffer();
	} while (!valida_cpf_funcionario_pesquisa(cpf));
   
    system("clear||cls");
    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    pesquisar_funcionario(cpf);
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    limparBuffer();
}

void tela_alterar_funcionario(void) {
    char cpf[12];
    char nome[61];
    char email[61];
    char data[12];
    char fone[15];
    int alt = -1;
    system("clear||cls");
    printf("\n");
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
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///            = = = = = = = = Alterar Fucionario = = = = = =               ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    limparBuffer();
    do {
		printf("///            Informe o CPF (apenas numeros): ");
		scanf("%[^\n]",cpf);
		limparBuffer();
	} while (!valida_cpf_funcionario_pesquisa(cpf));
    system("clear||cls");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                     OPCOES DE ALTERACAO                                 ///\n");
    printf("///                                                                         ///\n");
    printf("///                     1- Alterar o nome                                   ///\n");
    printf("///                     2- Alterar o email                                  ///\n");
    printf("///                     3- Alterar a data de nascimeto                      ///\n");
    printf("///                     4- Alterar o numero telefonico                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    scanf("%d",&alt);
    switch (alt)
    {
    case 1:
    
    do {
		printf(".> Digite o novo Nome: ");
        limparBuffer();
		scanf("%61[^\n]",nome);
	} while (!validaNome(nome));
        atualizar_funcionario_nome(cpf,nome);
        limparBuffer();
        break;

    case 2:

     do {   
		printf(".> Digite o novo email: ");
        limparBuffer();
		scanf("%61[^\n]",email);
	} while (!validaEmail(email));
        atualizar_funcionario_email(cpf,email);
        limparBuffer();
        break;

    case 3:

    do {
		printf(".> nova Data de Nascimento (dd/mm/aaaa): ");
        limparBuffer();
		scanf(("%11[0-9/]"),data);
	} while (!valida_data(data));
        atualizar_funcionario_data(cpf,data);
        limparBuffer();
        break;

    case 4:

         do {
		printf(".> Numero novo  (apenas números): ");
        limparBuffer();
		scanf("%15[^\n]",fone);
	    } while (!validaFone(fone));
        atualizar_funcionario_telefone(cpf,fone);
        limparBuffer();
        break;

    default:
        break;
    }
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    limparBuffer();
}




void tela_excluir_funcionario(void) {
    char cpf[12];
    system("clear||cls");
    printf("\n");
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
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///            = = = = = = = = Excluir funcionario = = = = = =              ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    limparBuffer();
     do {
		printf("///            Informe o CPF (apenas numeros): ");
		scanf("%12[^\n]",cpf);
		limparBuffer();
	} while (!valida_cpf_funcionario_pesquisa(cpf));
    atualizar_situacao_funcionario(cpf);
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    limparBuffer();
}

void tela_exibir_funcionario(void) {
    system("clear||cls");

    printf("\n");
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
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///            = = = = = = = = Lista de Funcionarios = = = = =              ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    exibir_funcionario_menu();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    limparBuffer();
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
       printf("\nCPF invalido.\n");
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
       printf("\nCPF invalido.\n");
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





void pesquisar_funcionario(const char *cpf) {
    FILE *arquivo = fopen("funcionario.bin", "rb");
    if (arquivo != NULL) {
        Funcionario funcionario;

         // Flag para indicar se o cliente foi encontrado

        while (fread(&funcionario, sizeof(Funcionario), 1, arquivo) == 1) {
           
            // Compara o CPF do cliente atual com o CPF desejado
            if (strcmp(funcionario.cpf, cpf) == 0) {
                printf("Cliente encontrado:\n");
                printf("CPF: %s\n", funcionario.cpf);
                printf("NOME: %s\n", funcionario.nome);
                printf("EMAIL: %s\n", funcionario.email);
                printf("DATA: %s\n", funcionario.data);
                printf("TELEFONE: %s\n",funcionario.fone);
                printf("SITUACAO: %c\n",funcionario.situacao);
                
                break; // Se encontrou, sai do loop
            }
        }

        fclose(arquivo);
    } else {
        printf("Erro ao abrir o arquivo para leitura.\n");
    }
}

// Função para atualizar um cliente no arquivo binário
void atualizar_funcionario_nome(const char *cpf, const char *novo_dado) {
    FILE *arquivo = fopen("funcionario.bin", "r+b");

    if (arquivo != NULL) {
        Funcionario funcionario;

        // Encontrar a posição do registro que possui o CPF fornecido
        while (fread(&funcionario, sizeof(Funcionario), 1, arquivo) == 1) {
            if (strcmp(funcionario.cpf, cpf) == 0) {
                // Atualizar os campos necessários do registro
                strcpy(funcionario.nome, novo_dado);

                // Voltar à posição do arquivo onde o registro foi lido
                fseek(arquivo, -sizeof(Funcionario), SEEK_CUR);

                // Escrever o registro modificado de volta no arquivo
                fwrite(&funcionario, sizeof(Funcionario), 1, arquivo);

                printf("%s atualizado com sucesso!\n",novo_dado);
                break;
            }
        }

        fclose(arquivo);
    } else {
        printf("Erro ao abrir o arquivo para leitura e gravacao.\n");
    }
}


// Função para atualizar um cliente no arquivo binário
void atualizar_funcionario_email(const char *cpf, const char *novo_dado) {
    FILE *arquivo = fopen("funcionario.bin", "r+b");

    if (arquivo != NULL) {
        Funcionario funcionario;

        // Encontrar a posição do registro que possui o CPF fornecido
        while (fread(&funcionario, sizeof(Funcionario), 1, arquivo) == 1) {
            if (strcmp(funcionario.cpf, cpf) == 0) {
                // Atualizar os campos necessários do registro
                strcpy(funcionario.email, novo_dado);

                // Voltar à posição do arquivo onde o registro foi lido
                fseek(arquivo, -sizeof(Funcionario), SEEK_CUR);

                // Escrever o registro modificado de volta no arquivo
                fwrite(&funcionario, sizeof(Funcionario), 1, arquivo);

                printf("%s atualizado com sucesso!\n",novo_dado);
                break;
            }
        }

        fclose(arquivo);
    } else {
        printf("Erro ao abrir o arquivo para leitura e gravação.\n");
    }
}



void atualizar_funcionario_data(const char *cpf, const char *novo_dado) {
    FILE *arquivo = fopen("funcionario.bin", "r+b");

    if (arquivo != NULL) {
        Funcionario funcionario;

        // Encontrar a posição do registro que possui o CPF fornecido
        while (fread(&funcionario, sizeof(Funcionario), 1, arquivo) == 1) {
            if (strcmp(funcionario.cpf, cpf) == 0) {
                // Atualizar os campos necessários do registro
                strcpy(funcionario.data, novo_dado);

                // Voltar à posição do arquivo onde o registro foi lido
                fseek(arquivo, -sizeof(Funcionario), SEEK_CUR);

                // Escrever o registro modificado de volta no arquivo
                fwrite(&funcionario, sizeof(Funcionario), 1, arquivo);

                printf("%s atualizado com sucesso!\n",novo_dado);
                break;
            }
        }

        fclose(arquivo);
    } else {
        printf("Erro ao abrir o arquivo para leitura e gravacao.\n");
    }
}



void atualizar_funcionario_telefone(const char *cpf, const char *novo_dado) {
    FILE *arquivo = fopen("funcionario.bin", "r+b");

    if (arquivo != NULL) {
        Funcionario funcionario;

        // Encontrar a posição do registro que possui o CPF fornecido
        while (fread(&funcionario, sizeof(Funcionario), 1, arquivo) == 1) {
            if (strcmp(funcionario.cpf, cpf) == 0) {
                // Atualizar os campos necessários do registro
                strcpy(funcionario.fone, novo_dado);

                // Voltar à posição do arquivo onde o registro foi lido
                fseek(arquivo, -sizeof(Funcionario), SEEK_CUR);

                // Escrever o registro modificado de volta no arquivo
                fwrite(&funcionario, sizeof(Funcionario), 1, arquivo);

                printf("%s atualizado com sucesso!\n",novo_dado);
                break;
            }
        }

        fclose(arquivo);
    } else {
        printf("Erro ao abrir o arquivo para leitura e gravação.\n");
    }
}


void atualizar_situacao_funcionario(const char *cpf) {
    FILE *arquivo = fopen("funcionario.bin", "rb+");
    char nova_situacao = 'I';

    if (arquivo != NULL) {
        Funcionario funcionario;

        while (fread(&funcionario, sizeof(Funcionario), 1, arquivo) == 1) {
            // Verifica se o CPF do cliente atual é o desejado
            if (strcmp(funcionario.cpf, cpf) == 0) {
                // Atualiza a situação do cliente
                funcionario.situacao = nova_situacao;

                // Volta para a posição do arquivo para escrever a alteração
                fseek(arquivo, -sizeof(Funcionario), SEEK_CUR);
                fwrite(&funcionario, sizeof(Funcionario), 1, arquivo);

                printf("Funcionario com CPF %s excluído com sucesso.\n", cpf);
                break; // Cliente encontrado, não precisa continuar procurando
            }
        }

        fclose(arquivo);
    } else {
        printf("Erro ao abrir o arquivo para leitura e escrita.\n");
    }
}


void exibir_funcionario_menu(void) {
    FILE *arquivo = fopen("funcionario.bin", "rb");
    int i;
    if (arquivo != NULL) {
        Funcionario funcionario;
        i=1;

        while (fread(&funcionario, sizeof(Funcionario), 1, arquivo) == 1) {
            if (funcionario.situacao != 'I'){
                // Mostrar informações da venda

                printf("Funcionario encontrado:%d\n",i);
                printf("CPF: %s\n", funcionario.cpf);
                printf("NOME: %s\n", funcionario.nome);
                printf("EMAIL: %s\n", funcionario.email);
                printf("DATA: %s\n", funcionario.data);
                printf("TELEFONE: %s\n", funcionario.fone);
                printf("SITUACAO: %c\n", funcionario.situacao);
                printf("Proximo Funcionario->\n");
                printf("#####################################\n");
                limparBuffer();
                i+=1;
            }
        }

        fclose(arquivo);
    } else {
        printf("Erro ao abrir o arquivo de vendas para leitura.\n");
    }
}