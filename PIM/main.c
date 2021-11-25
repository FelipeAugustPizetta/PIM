#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <C:\Users\Felip\OneDrive\Documentos\Trabalho\main\equipe-controller.c>

int opcao;

typedef struct{
    char login[30];
    char senha[30];
} pessoa; pessoa p[1];

void cls() {
    system("cls");
}

void main_principal() {
    cls();
    printf("    [Sistema de Controle Olímpico]\n");
    printf("\n(1) Controle de Cadastros");
    printf("\n(2) Painel de Relatórios");
    printf("\n(3) Sobre nós");
    printf("\n\n(0) Deslogar\n");
    printf("\n\nEscolha uma opção: ");
    scanf("%d", &opcao);
    switch(opcao){
    case 1:
        main_cadastro();
        break;
    case 2:
        main_relatorios();
        break;
    case 3:
        main_desenvolvedores();
        break;
    case 0:
        sistemalogin();
        break;
    }

}

void main_cadastro() {
    cls();
    printf("    [Sistema de Controle Olímpico] » Controle de Cadastros\n");
    printf("\n(1) Equipe");
    printf("\n(2) Atletas");
    printf("\n(3) Médicos");
    printf("\n(4) Voluntários");
    printf("\n(5) Funcionários");
    printf("\n(6) Equipamentos");
    printf("\n\n(0) Voltar\n");
    printf("\n\nEscolha uma opção: ");
    scanf("%d", &opcao);
    switch(opcao){
    case 1:
        submain_equipe();
        break;
    case 2:
        submain_atletas();
        break;
    case 3:
        submain_medicos();
        break;
    case 4:
        submain_voluntarios();
        break;
    case 5:
        submain_funcionarios();
        break;
    case 6:
        submain_equipamentos();
        break;
    case 0:
        main_principal();
        break;
    }
}

void main_relatorios() {
    cls();
    printf("    [Sistema de Controle Olímpico] » Painel de Relatórios\n");
    printf("\nMedalhas de Bronze: 4");
    printf("\nMedalhas de Prata: 2");
    printf("\nMedalhas de Ouro: 1");
    printf("\n\nEquipes: 2");
    printf("\nAtletas: 3");
    printf("\nMédicos: 5");
    printf("\nVoluntários: 6");
    printf("\nFuncionários: 1");
    printf("\nEquipamentos: 5");

    printf("\n\nMedalhas Distribuídas: 7");
    printf("\nTotal de Pessoas: 21");
    printf("\n\n(0) Voltar\n");
    printf("\n\nEscolha uma opção: ");
    scanf("%d", &opcao);
    switch(opcao){
    case 0:
        main_principal();
        break;
    }
}

void main_desenvolvedores() {
    cls();
    printf("    [Sistema de Controle Olímpico] » Sobre nós\n");
    printf("\n    888888888888888888888");
    printf("\n  s 88 ooooooooooooooo 88     s 888888888888888888888888888888888888888");
    printf("\n  S 88 888888888888888 88    SS 888888888888888888888888888888888888888");
    printf("\n SS 88 888888888888888 88   SSS 8888                         - --+ 8888");
    printf("\n SS 88 ooooooooooooooo 88  sSSS 8888           o8888888o         | 8888");
    printf("\nsSS 88 888888888888888 88 SSSSS 8888         o88888888888o         8888");
    printf("\nSSS 88 888888888888888 88 SSSSS 8888        8888 88888 8888      | 8888");
    printf("\nSSS 88 ooooooooooooooo 88 SSSSS 8888       o888   888   888o       8888");
    printf("\nSSS 88 888888888888888 88 SSSSS 8888       8888   888   8888       8888");
    printf("\nSSS 88 888888888888888 88 SSSSS 8888       8888   888   8888       8888");
    printf("\nSSS 88 oooooooooo      88 SSSSS 8888       8888o o888o o8888       8888");
    printf("\nSSS 88 8888888888 .::. 88 SSSSS 8888       988 8o88888o8 88P       8888");
    printf("\nSSS 88 oooooooooo :::: 88 SSSSS 8888        8oo 9888889 oo8        8888");
    printf("\nSSS 88 8888888888  `'  88 SSSSS 8888         988o     o88P         8888");
    printf("\nSSS 88ooooooooooooooooo88  SSSS 8888           98888888P           8888");
    printf("\nSSS 888888888888888888888__SSSS 8888                               8888");
    printf("\nSSS |   *  *  *   )8c8888  SSSS 888888888888888888888888888888888888888");
    printf("\nSSS 888888888888888888888   SSS 888888888888888888888888888888888888888");
    printf("\nSSS 888888888888888888888    SSsssss oooooooooooooooooooooooooooo ssss");
    printf("\nSSS 888888888888888888888       __SS 88+-8+-88============8-8==88 S");
    printf("\nSSS 888888888888888888888      \  S 8888888888888888888888888888");
    printf("\nSSS 888888888888888888888       \\       `.__________.'      ` .");
    printf("\nSSS 88O8O8O8O8O8O8O8O8O88        \\______________________________`_.");
    printf("\nSSS 88 el cheapo 8O8O8O88         \|________________________________|");
    printf("\n SS 88O8O8O8O8o8O8O8O8O88");
    printf("\n  S 888888888888888888888");
    printf("\n\n                                                                  Felipe Augusto Pizetta - G25HGB");
    printf("\n                                                                  Isabela Lima de Almeida – G385667");
    printf("\n                                                                  Kelvin de Freitas Ribeiro – F342930");
    printf("\n                                                                  Matheus Leonardo Pizetta – G25JAG2");
    printf("\n\n(13) Desligar Computador\n");
    printf("\n(0) Voltar\n");
    printf("\n\nEscolha uma opção: ");
    scanf("%d", &opcao);
    switch(opcao){
    case 13:
        break;
    case 0:
        main_principal();
        break;
    }
}

/* Submenu - Controle de Cadastros*/

void submain_equipe() {
    cls();
    printf("    [Sistema de Controle Olímpico] » Cadastro de Equipe\n");
    printf("\n(1) Cadastrar Equipe");
    printf("\n(2) Modificar Cadastro");
    printf("\n(3) Deletar Cadastro");
    printf("\n(4) Lista de Equipe");
    printf("\n\n(0) Voltar\n");
    printf("\n\nEscolha uma opção: ");
    scanf("%d", &opcao);
    switch(opcao){
    case 1:
        cadastrarEquipe();
        break;
    case 2:

        break;
    case 3:
        break;
    case 4:
        break;
    case 0:
        main_cadastro();
        break;
    }
}

void submain_atletas() {
    cls();
    printf("    [Sistema de Controle Olímpico] » Cadastro de Atleta\n");
    printf("\n(1) Cadastrar Atleta");
    printf("\n(2) Modificar Cadastro");
    printf("\n(3) Deletar Cadastro");
    printf("\n(4) Procurar por Código");
    printf("\n(5) Procurar por Nome");
    printf("\n\n(0) Voltar\n");
    printf("\n\nEscolha uma opção: ");
    scanf("%d", &opcao);
    switch(opcao){
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 0:
        main_cadastro();
        break;
    }
}

void submain_medicos() {
    cls();
    printf("    [Sistema de Controle Olímpico] » Cadastro de Médico\n");
    printf("\n(1) Cadastrar Médico");
    printf("\n(2) Modificar Cadastro");
    printf("\n(3) Deletar Cadastro");
    printf("\n(4) Procurar por Código");
    printf("\n(5) Procurar por Nome");
    printf("\n\n(0) Voltar\n");
    printf("\n\nEscolha uma opção: ");
    scanf("%d", &opcao);
    switch(opcao){
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 0:
        main_cadastro();
        break;
    }
}

void submain_voluntarios() {
    cls();
    printf("    [Sistema de Controle Olímpico] » Cadastro de Voluntário\n");
    printf("\n(1) Cadastrar Voluntário");
    printf("\n(2) Modificar Cadastro");
    printf("\n(3) Deletar Cadastro");
    printf("\n(4) Procurar por Código");
    printf("\n(5) Procurar por Nome");
    printf("\n\n(0) Voltar\n");
    printf("\n\nEscolha uma opção: ");
    scanf("%d", &opcao);
    switch(opcao){
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 0:
        main_cadastro();
        break;
    }
}

void submain_funcionarios() {
    cls();
    printf("    [Sistema de Controle Olímpico] » Cadastro de Funcionário\n");
    printf("\n(1) Cadastrar Funcionário");
    printf("\n(2) Modificar Cadastro");
    printf("\n(3) Deletar Cadastro");
    printf("\n(4) Procurar por Código");
    printf("\n(5) Procurar por Nome");
    printf("\n\n(0) Voltar\n");
    printf("\n\nEscolha uma opção: ");
    scanf("%d", &opcao);
    switch(opcao){
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 0:
        main_cadastro();
        break;
    }
}

void submain_equipamentos() {
    cls();
    printf("    [Sistema de Controle Olímpico] » Cadastro de Equipamento\n");
    printf("\n(1) Cadastrar Equipamento");
    printf("\n(2) Modificar Cadastro");
    printf("\n(3) Deletar Cadastro");
    printf("\n(4) Procurar por Código");
    printf("\n(5) Procurar por Nome");
    printf("\n\n(0) Voltar\n");
    printf("\n\nEscolha uma opção: ");
    scanf("%d", &opcao);
    switch(opcao){
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 0:
        main_cadastro();
        break;
    }
}

/* Fim: Submenu - Controle de Cadastros*/

void sistemalogin() {
    cls();
    char login[30];
    char senha[30];

    strcpy(p[0].login, "root");
    strcpy(p[0].senha, "123");

    printf("    [Sistema de Controle Olímpico] » Sistema de Login\n");
    printf("\nDigite seu Usuário: ");
    scanf("%s", login);

    printf("Digite seu Senha: ");
    scanf("%s", senha);

    if ((strcmp(login,p[0].login)==0) && (strcmp(senha,p[0].senha)==0)){
            main_principal();
    }else{
        printf("\nDados Incorretos.\n");
    }
}

int main()
{
    system("color e");
    setlocale(LC_ALL, "Portuguese_Brazil");
    sistemalogin();
}
