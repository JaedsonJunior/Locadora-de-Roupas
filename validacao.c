#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


//replit.com/@flaviusgorgonio/LendoExibindoCaracteresc#main.c

int ehLetra(char c) {
if (c>='A' && c<='Z') {
return 1;
}
else if (c>='a' && c<='z') {
return 1;
}
else {
return 0;
}
}

//adaptado de replit.com/@flaviusgorgonio/LendoExibindoCaracteresc#main.c
int va_numero(char c) {
if (c>='0' && c<='9') {
return 1;
}
else {
return 0;
}
}


//CPF ///https://gist.github.com/eduardoedson/8f991b6d234a9ebdcbe3

int validarCPF(const char *cpf){
    int i, j, digito1 = 0, digito2 = 0;
    if(strlen(cpf) != 11)
        return 0;
    else if((strcmp(cpf,"00000000000") == 0) || (strcmp(cpf,"22222222222") == 0) ||
            (strcmp(cpf,"33333333333") == 0) || (strcmp(cpf,"44444444444") == 0) || (strcmp(cpf,"55555555555") == 0) ||
            (strcmp(cpf,"66666666666") == 0) || (strcmp(cpf,"77777777777") == 0) || (strcmp(cpf,"88888888888") == 0) ||
            (strcmp(cpf,"99999999999") == 0))
        return 0; ///se o CPF tiver todos os números iguais ele é inválido.
    else
    {
        ///digito 1---------------------------------------------------
        for(i = 0, j = 10; i < strlen(cpf)-2; i++, j--) ///multiplica os números de 10 a 2 e soma os resultados dentro de digito1
            digito1 += (cpf[i]-48) * j;
        digito1 %= 11;
        if(digito1 < 2)
            digito1 = 0;
        else
            digito1 = 11 - digito1;
        if((cpf[9]-48) != digito1)
            return 0; ///se o digito 1 não for o mesmo que o da validação CPF é inválido
        else
        ///digito 2--------------------------------------------------
        {
            for(i = 0, j = 11; i < strlen(cpf)-1; i++, j--) ///multiplica os números de 11 a 2 e soma os resultados dentro de digito2
                    digito2 += (cpf[i]-48) * j;
        digito2 %= 11;
        if(digito2 < 2)
            digito2 = 0;
        else
            digito2 = 11 - digito2;
        if((cpf[10]-48) != digito2)
            return 0; ///se o digito 2 não for o mesmo que o da validação CPF é inválido
        }
    }
    return 1;}


//nome /// adaptado de https://gist.github.com/jpcabana1/69054083240567faae13cb375e291e49

int validaNome(const char nome[]) {
    // Verifica se a string é vazia ou contém apenas espaços
    if (nome[0] == '\0' || (isspace((unsigned char)nome[0]) && nome[1] == '\0')) {
        return 0;
    }

    // Loop para verificar cada caractere na string
    for (int i = 0; nome[i] != '\0'; i++) {
        // Verifica se cada caractere é alfabético, espaço ou apóstrofo
        if (!isalpha((unsigned char)nome[i]) && nome[i] != ' ' && nome[i] != '\'') {
            return 0;
        }
    }

    // Se a primeira letra for Enter, trata como string vazia
    if (nome[0] == '\n') {
        return 0;
    }

    // Se todas as condições forem atendidas, retorna true
    return 1;
}