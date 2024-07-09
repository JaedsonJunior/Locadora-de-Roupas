#ifndef funcionario_h
#define funcionario_h
typedef struct funcionario Funcionario;

struct funcionario
{
char cpf[15];
char nome[61];
char email[61];
char data[15];
char fone[15];
};

int tela_menu_funcionario(void);
void tela_cadastrar_funcionario(void);
void tela_pesquisar_funcionario(void);
void tela_alterar_funcionario(void);
void tela_excluir_funcionario(void);



#endif