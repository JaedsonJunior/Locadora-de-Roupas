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
void atualizar_cliente_nome(const char *cpf, const char *novo_dado);
void atualizar_cliente_email(const char *cpf, const char *novo_dado);
void atualizar_cliente_data(const char *cpf, const char *novo_dado);
void atualizar_cliente_telefone(const char *cpf, const char *novo_dado);
void excluir_cliente(const char *cpf);
void atualizar_situacao_cliente(const char *cpf);
void tela_exibir_cliente(void);
void exibir_cliente_menu(void);






#endif