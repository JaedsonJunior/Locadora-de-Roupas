#ifndef mdvenda_h
#define mdvenda_h

typedef struct venda nova_venda;

struct venda
{
char cpf_cliente[12];
char cpf_funcionario[12];
char id_produto[4];
int data;
};

int tela_menu_venda(void);
void cadastrar_e_salvar_venda(nova_venda *aln);
void pesquisar_cliente_venda(const char *cpf); 
void pesquisar_funcionario_venda(const char *cpf); 
void salvar_venda(nova_venda *aln);
int tela_listar_venda(void);
void venda_cliente(void);
void venda_funcionario(void);
void lista_geral();
void pesquisar_funcionario_venda(const char *cpf);
void pesquisar_cliente_venda(const char *cpf);
void mostrar_vendas_por_funcionario(const char *cpf_funcionario);
void mostrar_vendas_por_cliente(const char *cpf_cliente);


















#endif