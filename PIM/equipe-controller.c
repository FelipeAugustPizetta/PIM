#include <stdlib.h>
#include <string.h>

struct Equipe {
    int codigo;
    int quantidade;
    struct Equipe *proximo;
};

typedef struct Equipe Equipe;

void inserir(Equipe novoEquipe, Equipe *listaEquipe) {

    Equipe *p;

    p = malloc(sizeof(Equipe));

    p->codigo = novoEquipe.codigo;
    p->quantidade = novoEquipe.quantidade;

    p->proximo = listaEquipe->proximo;
    listaEquipe->proximo = p;
}

static Equipe *equipes;

void cadastrarEquipe() {

    Equipe novoEquipe;

    printf("\nInforme o código: ");
    scanf("%d", &novoEquipe.codigo);

    printf("\nQuantas Pessoas tem nessa equipe? ");
    scanf("%d", &novoEquipe.quantidade);

    if(equipes == NULL) {
        printf("\nEquipe salva com sucesso...\n");
        equipes = malloc(sizeof(Equipe));
        equipes->proximo = NULL;

        equipes->codigo = novoEquipe.codigo;
        equipes->quantidade = novoEquipe.quantidade;
    } else {
        inserir(novoEquipe, equipes);
    }
}

void pesquisarProdutosPorNome(int codigo) {
    printf("Pesquisar por código: ");
}


void removerProdutoPorCodigo(int codigo) {
    printf("Remover equipe por código: ");
}
