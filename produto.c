#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "produto.h"
#include "ultilidade.h"
#include "validacao.h"
#include "guardar.h"


int tela_menu_produto(void) {
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
    printf("///            = = = = = = = = =  Menu produto = = = = = = = =              ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Cadastrar um novo produto                                 ///\n");
    printf("///            2. Pesquisar os dados de um produto                          ///\n");
    printf("///            3. Atualizar os dados de um produto                          ///\n");
    printf("///            4. Excluir um produto do sistema                             ///\n");
    printf("///            5. Listar Produtos                                           ///\n");
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
                tela_cadastrar_produto();
                break;
            case 2:
                tela_pesquisar_produto();
                break;
            case 3:
                tela_alterar_produto();
                break;
            case 4:
                tela_excluir_produto();    
                break;
            case 5:
                tela_exibir_produto();    
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

Produto* tela_cadastrar_produto(void) {
    Produto *aln;
    aln = (Produto*) malloc(sizeof(Produto));
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
    printf("///            = = = = = = = = Cadastrar produto = = = = = = = =            ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    limparBuffer();
    printf("///            sexo (M / F): ");
    scanf("%3[^\n]", aln->genero);
    limparBuffer();
    printf("///            nome: ");
    scanf("%61[^\n]", aln->nome);
    limparBuffer();
    printf("///            Cor: ");
    scanf("%s", aln->cor);
    limparBuffer();
    printf("///            preco: ");
    scanf("%s", aln->preco);
    limparBuffer();
    printf("///            Quantidade: ");
    scanf("%s", aln->quantidade);
    limparBuffer();
    printf("///            ID(1 a 999): ");
    scanf("%4s", aln->id);
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    salvar_produto(aln);
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    limparBuffer();
    return aln;
    
}


void tela_pesquisar_produto(void) {
    char id[4];
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
    printf("///            = = = = = = = = Pesquisar Produto = = = = = = = =            ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///            ID(1 a 999): ");
    scanf("%3s",id);
	limparBuffer();
    system("clear||cls");
    printf("///////////////////////////////////////////////////////////////////////////////\n");   
    pesquisar_produto(id);
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    limparBuffer();
}



void tela_alterar_produto(void) {
    char id[4];
    char nome[61];
    char preco[7];
    char quantidade[4];
    char cor[4];
    int alt;
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
    printf("///            = = = = = = = = Alterar Cliente = = = = = = = =              ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
	printf("///            Informe o ID (1 a 999): ");
	scanf("%3s",id);
	limparBuffer();
	
    system("clear||cls");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                     OPCOES DE ALTERACAO                                 ///\n");
    printf("///                                                                         ///\n");
    printf("///                     1- Alterar o nome                                   ///\n");
    printf("///                     2- Alterar o preco                                  ///\n");
    printf("///                     3- Alterar a quantidade                             ///\n");
    printf("///                     4- Alterar a cor                             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    scanf("%d",&alt);
    switch (alt)
    {
    case 1:
    
		printf(".> Digite o novo Nome: ");
        limparBuffer();
		scanf("%61[^\n]",nome);
        atualizar_produto_nome(id,nome);
        limparBuffer();
        break;
    
    case 2:
        printf(".> Digite o novo preco: ");
        limparBuffer();
		scanf(("%6s"),preco);
        atualizar_produto_preco(id,preco);
        limparBuffer();
        break;

    case 3:
        printf(".> Digite a nova quantidade: ");
        limparBuffer();
		scanf(("%3s"),quantidade);
        atualizar_produto_quantidade(id,quantidade);
        limparBuffer();
        break;  

    case 4:
        printf(".> Digite a nova cor: ");
        limparBuffer();
		scanf(("%3s"),cor);
        atualizar_produto_cor(id,cor);
        limparBuffer();
        break; 

    default:
        break;
    }
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    limparBuffer();
}





void tela_excluir_produto(void) {
    char id[4];
    
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
    printf("///            = = = = = = = = excluir produto = = = = = = = =              ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");   
    printf("///            ID(1-999): ");
    scanf("%3s",id);
    limparBuffer();
    excluir_produto(id);
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    limparBuffer();
}



void tela_exibir_produto(void) {
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
    printf("///              = = = = =  Exibir Lista de Produto = = = =                 ///\n");
    printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
    printf("///                                                                         ///\n");
    exibir_produto();
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    limparBuffer();
}


void pesquisar_produto(const char *id) {
    FILE *arquivo = fopen("produto.bin", "rb");

    if (arquivo != NULL) {
        Produto produto;
        int encontrado = 0; // Flag para indicar se o produto foi encontrado

        while (fread(&produto, sizeof(Produto), 1, arquivo) == 1) {
            // Compara o id do produto atual com o produto desejado
            if (strcmp(produto.id, id) == 0) {
                printf("Produto encontrado:\n");
                printf("ID:%s\n",produto.id);
                printf("Roupa:%s\n",produto.genero);
                printf("Nome: %s\n", produto.nome);
                printf("Cor: %s\n ", produto.cor);
                printf("Preco: R$ %s\n", produto.preco);
                printf("Quantidade: %s Unidades\n", produto.quantidade);
                limparBuffer();
                
                encontrado = 1;
                break; // Se encontrou, sai do loop
            }
        }

        if (!encontrado) {
            printf("Produto com ID %s nao encontrado.\n", id);
        }

        fclose(arquivo);
    } else {
        printf("Erro ao abrir o arquivo para leitura.\n");
    }
}


void atualizar_produto_nome(const char *id, const char *novo_dado) {
    FILE *arquivo = fopen("produto.bin", "r+b");

    if (arquivo != NULL) {
        Produto produto;

        // Encontrar a posição do registro que possui o CPF fornecido
        while (fread(&produto, sizeof(Produto), 1, arquivo) == 1) {
            if (strcmp(produto.id, id) == 0) {
                // Atualizar os campos necessários do registro
                strcpy(produto.nome, novo_dado);

                // Voltar à posição do arquivo onde o registro foi lido
                fseek(arquivo, -sizeof(Produto), SEEK_CUR);

                // Escrever o registro modificado de volta no arquivo
                fwrite(&produto, sizeof(Produto), 1, arquivo);

                printf("%s atualizado com sucesso!\n",novo_dado);
                break;
            }
        }

        fclose(arquivo);
    } else {
        printf("Erro ao abrir o arquivo para leitura e gravacao.\n");
    }}

void atualizar_produto_preco(const char *id, const char *novo_dado) {
    FILE *arquivo = fopen("produto.bin", "r+b");

    if (arquivo != NULL) {
        Produto produto;

        // Encontrar a posição do registro que possui o CPF fornecido
        while (fread(&produto, sizeof(Produto), 1, arquivo) == 1) {
            if (strcmp(produto.id, id) == 0) {
                // Atualizar os campos necessários do registro
                strcpy(produto.preco, novo_dado);

                // Voltar à posição do arquivo onde o registro foi lido
                fseek(arquivo, -sizeof(Produto), SEEK_CUR);

                // Escrever o registro modificado de volta no arquivo
                fwrite(&produto, sizeof(Produto), 1, arquivo);

                printf("%s atualizado com sucesso!\n",novo_dado);
                break;
            }
        }

        fclose(arquivo);
    } else {
        printf("Erro ao abrir o arquivo para leitura e gravacao.\n");
    }
    
    }


void atualizar_produto_quantidade(const char *id, const char *novo_dado) {
     FILE *arquivo = fopen("produto.bin", "r+b");

    if (arquivo != NULL) {
        Produto produto;

        // Encontrar a posição do registro que possui o CPF fornecido
        while (fread(&produto, sizeof(Produto), 1, arquivo) == 1) {
            if (strcmp(produto.id, id) == 0) {
                // Atualizar os campos necessários do registro
                strcpy(produto.quantidade, novo_dado);

                // Voltar à posição do arquivo onde o registro foi lido
                fseek(arquivo, -sizeof(Produto), SEEK_CUR);

                // Escrever o registro modificado de volta no arquivo
                fwrite(&produto, sizeof(Produto), 1, arquivo);

                printf("%s atualizado com sucesso!\n",novo_dado);
                break;
            }
        }

        fclose(arquivo);
    } else {
        printf("Erro ao abrir o arquivo para leitura e gravacao.\n");
    }}

void atualizar_produto_cor(const char *id, const char *novo_dado) {
    FILE *arquivo = fopen("produto.bin", "r+b");

    if (arquivo != NULL) {
        Produto produto;

        // Encontrar a posição do registro que possui o CPF fornecido
        while (fread(&produto, sizeof(Produto), 1, arquivo) == 1) {
            if (strcmp(produto.id, id) == 0) {
                // Atualizar os campos necessários do registro
                strcpy(produto.cor, novo_dado);

                // Voltar à posição do arquivo onde o registro foi lido
                fseek(arquivo, -sizeof(Produto), SEEK_CUR);

                // Escrever o registro modificado de volta no arquivo
                fwrite(&produto, sizeof(Produto), 1, arquivo);

                printf("%s atualizado com sucesso!\n",novo_dado);
                break;
            }
        }

        fclose(arquivo);
    } else {
        printf("Erro ao abrir o arquivo para leitura e gravacao.\n");
    }}


void atualizar_produto_genero(const char *id, const char *novo_dado) {
    FILE *arquivo = fopen("produto.bin", "r+b");

    if (arquivo != NULL) {
        Produto produto;

        // Encontrar a posição do registro que possui o CPF fornecido
        while (fread(&produto, sizeof(Produto), 1, arquivo) == 1) {
            if (strcmp(produto.id, id) == 0) {
                // Atualizar os campos necessários do registro
                strcpy(produto.genero, novo_dado);

                // Voltar à posição do arquivo onde o registro foi lido
                fseek(arquivo, -sizeof(Produto), SEEK_CUR);

                // Escrever o registro modificado de volta no arquivo
                fwrite(&produto, sizeof(Produto), 1, arquivo);

                printf("%s atualizado com sucesso!\n",novo_dado);
                break;
            }
        }

        fclose(arquivo);
    } else {
        printf("Erro ao abrir o arquivo para leitura e gravacao.\n");
    }}



    void excluir_produto(const char *id) {
    FILE *arquivo;
    FILE *temp_pro;
    Produto produto;

    // Abra o arquivo binário para leitura
    arquivo = fopen("produto.bin", "rb");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }

    // Abra um arquivo temporário para escrita
    temp_pro = fopen("temp_pro.bin", "wb");
    if (temp_pro == NULL) {
        perror("Erro ao criar o arquivo temporario");
        fclose(arquivo);
        exit(EXIT_FAILURE);
    }

    // Leia os registros do arquivo e grave no arquivo temporário, exceto o que será excluído
    while (fread(&produto, sizeof(Produto), 1, arquivo) == 1) {
        if (strcmp(produto.id, id) != 0) {
            fwrite(&produto, sizeof(Produto), 1, temp_pro);
        }
    }

    // Feche os arquivos
    fclose(arquivo);
    fclose(temp_pro);

    // Remova o arquivo original e renomeie o temporário
    if (remove("produto.bin") != 0) {
        perror("Erro ao remover o arquivo original");
        exit(EXIT_FAILURE);
    }

    if (rename("temp_pro.bin", "produto.bin") != 0) {
        perror("Erro ao renomear o arquivo temporario");
        exit(EXIT_FAILURE);
    }

    printf("Produto de id %s excluido com sucesso.\n", id);
}

int valida_id(const char *id) {
    FILE *arquivo = fopen("produto.bin", "rb");
    
    if (arquivo != NULL) {
        Produto produto;

        while (fread(&produto, sizeof(Produto), 1, arquivo) == 1) {
            if (strcmp(produto.id, id) == 0) {
                fclose(arquivo);  // Feche o arquivo antes de retornar
                return 1;  // ID encontrado, retorne 1
            }
            // Não retorne 0 aqui, pois isso encerraria a função prematuramente
        }

        fclose(arquivo);
        // Se chegou aqui, o ID não foi encontrado em nenhum produto
        return 0;
    } else {
        printf("Erro ao abrir o arquivo...\n");
        return 0;
    }
}



void exibir_produto(void) {
    FILE *arquivo = fopen("produto.bin", "rb");
    int i;
    i = 1;
    if (arquivo != NULL) {
        Produto produto;
        
        while (fread(&produto, sizeof(Produto), 1, arquivo) == 1) {
            
                // Mostrar informações da venda
                printf("Produto encontrado:\n");
                printf("ID:%s\n",produto.id);
                printf("Roupa:%s\n",produto.genero);
                printf("Nome: %s\n", produto.nome);
                printf("Cor: %s\n ", produto.cor);
                printf("Preco: R$ %s\n", produto.preco);
                printf("Quantidade: %s Unidades\n", produto.quantidade);
                printf("###############################################\n");
                limparBuffer();
                i+=1;
                
                
            
        }

        fclose(arquivo);
    } else {
        printf("Erro ao abrir o arquivo de vendas para leitura.\n");
    }
}