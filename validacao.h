#ifndef ultilidade_h
#define ultilidade_h

int ehLetra(char c);
int va_numero(char* c);
int validarCPF(const char *cpf);
int validaNome(const char nome[]);
int validaFone(const char fone[]);
int validaEmail(const char *email);
int extrair_data(const char *data, int *dia, int *mes, int *ano);
int valida_data(const char *data);

#endif