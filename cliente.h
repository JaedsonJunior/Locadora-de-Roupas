#ifndef cliente_h
#define cliente_h
typedef struct cliente Cliente;

struct cliente
{
char cpf[15];
char nome[61];
char email[61];
char data[15];
char fone[15]; 
};

int tela_menu_cliente();
void tela_cadastrar_cliente(void);
void tela_pesquisar_cliente(void);
void tela_alterar_cliente(void);
void tela_excluir_cliente(void);





#endif