#include <stdio.h>
#include <stdlib.h>
// GUILHERME ABTIBOL LIRA VALENTE
typedef struct no {
    int dado;
    struct no *esq;
    struct no *dir;
} Node;

// Criar nó
Node * criar_no(int valor) {
    Node * novo = malloc(sizeof(Node));
    if (novo == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }
    novo->dado = valor;
    novo->esq = NULL;  // era '=='
    novo->dir = NULL;  // era '=='
    return novo;
}

// Inserir na árvore
Node *inserir_no(Node *raiz, int valor) {
    if (raiz == NULL) {
        return criar_no(valor);
    }

    if (valor < raiz->dado) {
        raiz->esq = inserir_no(raiz->esq, valor); // atualiza o ponteiro esquerdo
    } else if (valor > raiz->dado) {
        raiz->dir = inserir_no(raiz->dir, valor); // atualiza o ponteiro direito
    }
    return raiz;
}



void imprimir_arvore_ordem(Node * raiz) {
    if (raiz != NULL) {
        imprimir_arvore_ordem(raiz->esq);
        printf(" %d ", raiz->dado);
        imprimir_arvore_ordem(raiz->dir);
    }
}

// Imprimir árvore (pré-ordem)
void imprimir_arvore_pre_ordem(Node *raiz) {
    if (raiz != NULL) {
        printf(" %d ", raiz->dado);
        imprimir_arvore_pre_ordem(raiz->esq);
        imprimir_arvore_pre_ordem(raiz->dir);
    }
}

void imprimir_arvore_pos_ordem(Node * raiz) {
    if (raiz != NULL) {
        imprimir_arvore_pre_ordem(raiz->esq);
        imprimir_arvore_pre_ordem(raiz->dir);
        printf(" %d ", raiz->dado);
    }
}

void busca_no(Node * raiz,int valor) {
    if(raiz != NULL) {

        if (valor == raiz->dado) {
            printf("Valor encontrado");
            exit(1);
        }
        busca_no(raiz->esq, valor);
        busca_no(raiz->dir, valor);

    } else {
        printf("Valor nao encontrado!");
    }
}

Node * buscar_no_iterativo(Node * raiz, int valor) {
    Node *atual = raiz;
    while (atual != NULL) {
        if (valor == atual->dado) {
            return atual;
        } else if (valor < atual->dado) {
            atual = atual ->esq;
        } else {
            atual = atual->dir;
        }
    }
    return NULL;
}


int main() {
    Node *Raiz = NULL;

    // É importante armazenar o retorno da função
    Raiz = inserir_no(Raiz, 38);
    Raiz = inserir_no(Raiz, 46);
    Raiz = inserir_no(Raiz, 26);
    Raiz = inserir_no(Raiz, 13);
    Raiz = inserir_no(Raiz, 15);
    Raiz = inserir_no(Raiz, 70);

    printf("Árvore em pré-ordem:\n");
    imprimir_arvore_pre_ordem(Raiz);
    printf("\n");
    printf("Árvore em ordem:\n");
    imprimir_arvore_ordem(Raiz);
    printf("\n");
    printf("Árvore em pós-ordem:\n");
    imprimir_arvore_pos_ordem(Raiz);
    printf("\n");
    int x = 13;
    busca_no(Raiz, x);

    return 0;
}
