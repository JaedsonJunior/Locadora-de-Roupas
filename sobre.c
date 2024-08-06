#include <stdio.h>
#include <stdlib.h>
#include "ultilidade.h"

void tela_sobre(void) {
    limparBuffer();
    system("clear||cls");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Serido                     ///\n");
    printf("///               Departamento de Computacao e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programacao                      ///\n");
    printf("///                  Projeto Sistema de Gestao de locadora de roupas        ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///     = = = = = Projeto Sistema de Gestao de locadora de roupas = = = = = ///\n");
    printf("///                                                                         ///\n");
    printf("///  Programa exemplo utilizado na disciplina DCT1106 - Programacao, para   ///\n");
    printf("///  fins de aprendizado e avaliativo ao aluno:Jaedson da Silva Soares Junior///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    
}

void tela_equipe(void) {
    limparBuffer();
    system("clear||cls");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Serido                     ///\n");
    printf("///               Departamento de Computacao e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programacao                      ///\n");
    printf("///                Projeto Sistema de Gestao de locadora de roupas          ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///   = = = = = Projeto Sistema de Gestao de locadora de roupas  = = = = =  ///\n");
    printf("///                                                                         ///\n");
    printf("///            Este projeto exemplo foi desenvolvido por:                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            Aluno: Jaedson Junior                                        ///\n");
    printf("///            E-mail: jaedson.junior.017@ufrn.edu.br                       ///\n");
    printf("///            Redes sociais: @jaedsonjunior09c                             ///\n");
    printf("///            Git: https://github.com/JaedsonJunior/Locadora-de-Roupas.git ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    limparBuffer();
}

void mostrar_sobre(void){
    tela_sobre();
    
    tela_equipe();
}