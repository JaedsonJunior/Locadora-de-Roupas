#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"
#include "validacao.h"
#include "funcionario.h"
#include "produto.h"

void salvar_cliente(Cliente *aln) {
    FILE *arquivo = fopen("clientes.bin", "ab");

    if (arquivo != NULL) {
        fwrite(aln, sizeof(Cliente), 1, arquivo);
        fclose(arquivo);
        printf("Gravado com Sucesso!!\n");
    } else {
        printf("Erro ao abrir o arquivo para escrita.\n");
    }

}


void salvar_funcionario(Funcionario *aln) {
    FILE *arquivo = fopen("funcionario.bin", "ab");

    if (arquivo != NULL) {
        fwrite(aln, sizeof(Funcionario), 1, arquivo);
        fclose(arquivo);
        printf("Gravado com Sucesso!!\n");
    } else {
        printf("Erro ao abrir o arquivo para escrita.\n");
    }

}

void salvar_produto(Produto *aln) {
    FILE *arquivo = fopen("produto.bin", "ab");

    if (arquivo != NULL) {
        fwrite(aln, sizeof(Produto), 1, arquivo);
        fclose(arquivo);
        printf("Gravado com Sucesso!!\n");
    } else {
        printf("Erro ao abrir o arquivo para escrita.\n");
    }
}