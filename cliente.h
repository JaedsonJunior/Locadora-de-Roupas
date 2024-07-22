#ifndef cliente_h
#define cliente_h

typedef struct cliente Cliente;

struct cliente
{
char cpf[12];
char nome[61];
char email[61];
char data[12];
char fone[15];
char situacao; 
};

int tela_menu_cliente();
Cliente* tela_cadastrar_cliente(void);
void tela_pesquisar_cliente(void);
void tela_alterar_cliente(void);
void tela_excluir_cliente(void);
void pesquisar_cliente(const char *cpf);
int compara_cpf_cliente_cadastro(const char *cpf);
int valida_cpf_cliente_cadastro(const char *cpf);
int compara_cpf_cliente_pesquisa(const char *cpf);
int valida_cpf_cliente_pesquisa(const char *cpf);





#endif