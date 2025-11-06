#include <stdio.h>
#include <stdlib.h>

typedef struct no {
	int dado;
	struct no *esq;
	struct no *dir;
} Node;

// Criar No
Node *criar_no(int valor) {
	Node *novo = malloc(sizeof(Node));
	if (novo == NULL) {
		printf("Erro ao alocar memória!");
		exit(1);
	}
	novo->dado = valor;
	novo->esq = NULL;
	novo->dir = NULL;
	return novo;
} 

void buscar_no(Node * raiz, int valor) {
	if (raiz != NULL) {
		
		if (valor == raiz->dado) {
			printf("Valor encontrado");
			exit(1);
		}
		buscar_no(raiz->esq, valor);
		buscar_no(raiz->esq, valor);
	}
}
//Inserir na arvore
Node *inserir_no(Node *raiz, int valor) {
	if (raiz == NULL) {
		return criar_no(valor);
	}
	
	if (valor < raiz->dado ) {
		raiz->esq = inserir_no(raiz->esq, valor);
	} else if (valor > raiz->dado) {
		raiz->dir = inserir_no(raiz->dir, valor);
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

void busca_no(Node * raiz, int valor) {
	if (raiz != NULL) {
		
		if (valor == raiz->dado) {
        	return;
    	} else if (valor < raiz->dado) {
        	busca_no(raiz->esq, valor);
    	} else {
        	busca_no(raiz->dir, valor);
    	}
	}
}

Node *buscar_no_iterativo(Node * raiz, int valor) {
	Node *atual = raiz;
	while (atual != NULL) {
		if (valor == atual ->dado) {
			return atual;
		} else if (valor < atual->dado){
			atual = atual->esq;
		} else {
			atual = atual->dir;
		}
	}
	return NULL;
}

int main() {
	Node *Raiz = NULL;
	
	Raiz = inserir_no(Raiz, 8);
	Raiz = inserir_no(Raiz, 3);
	Raiz = inserir_no(Raiz, 10);
	Raiz = inserir_no(Raiz, 1);
	Raiz = inserir_no(Raiz, 6);
	Raiz = inserir_no(Raiz, 14);
	Raiz = inserir_no(Raiz, 4);
	Raiz = inserir_no(Raiz, 7);
	Raiz = inserir_no(Raiz, 13);
	
	printf("Árvore em ordem:\n");
    imprimir_arvore_ordem(Raiz);
    int x = 7;
    busca_no(Raiz, x);
    
    Node *resultado = buscar_no_iterativo(Raiz, x);
    if (resultado != NULL) {
        printf("Busca iterativa encontrou o valor: %d\n", resultado->dado);
    } else {
        printf("Busca iterativa: valor não encontrado.\n");
    }
    
    return 0;
    
}
