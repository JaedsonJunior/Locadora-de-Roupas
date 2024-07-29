#ifndef produto_h
#define produto_h
typedef struct produto Produto;

struct produto
{
char id[4];
char genero[2];
char nome[61];    
char cor[10];
char tamanho[3];
char quantidade[3];
char preco[7];
};

int tela_menu_produto();
Produto* tela_cadastrar_produto(void);
void tela_pesquisar_produto(void);
void tela_alterar_produto(void);
void tela_excluir_produto(void);
void excluir_produto(const char *id);
void atualizar_produto_quantidade(const char *id, const char *novo_dado);
void atualizar_produto_preco(const char *id, const char *novo_dado);
void atualizar_produto_nome(const char *id, const char *novo_dado);
void pesquisar_produto(const char *id);
void salvar_produto(Produto *aln);
void atualizar_produto_cor(const char *id, const char *novo_dado);
void atualizar_produto_genero(const char *id, const char *novo_dado);
int valida_id(const char *id);






#endif