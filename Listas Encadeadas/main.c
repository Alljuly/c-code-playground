#include <stdio.h>
#include <stdlib.h>

typedef struct No {
  char letra;
  struct No *prox;
} No;

No *criarNo(char letra) {
  No *novoNo = (No *)malloc(sizeof(No));
  if (novoNo != NULL) {
    novoNo->letra = letra;
    novoNo->prox = NULL;
  }
  return novoNo;
}

No *inserir(No *lista, const char *texto) {
  while (*texto != '\0') {
    No *novoNo = criarNo(*texto);
    novoNo->prox = lista;
    lista = novoNo;
    texto++;
  }
  return lista;
}

No *inserirRecursivo(No *lista, const char *texto) {
  if (*texto == '\0') {
    return lista;
  }
  No *novoNo = criarNo(*texto);
  novoNo->prox = lista;
  return inserirRecursivo(novoNo, texto + 1);
}

void imprimirLista(No *lista) {
  No *atual = lista;
  while (atual != NULL) {
    printf("%c -> ", atual->letra);
    atual = atual->prox;
  }
  printf("NULL\n");
}

void imprimirListaRecursiva(No *lista) {
  if (lista == NULL) {
    printf("NULL\n");
    return;
  }
  printf("%c -> ", lista->letra);
  imprimirListaRecursiva(lista->prox);
}

int listasIguais(No *lista1, No *lista2) {
  while (lista1 != NULL && lista2 != NULL) {
    if (lista1->letra != lista2->letra) {
      return 0;
    }
    lista1 = lista1->prox;
    lista2 = lista2->prox;
  }
  return (lista1 == NULL && lista2 == NULL);
}

No *removerCaractere(No *lista, char letra) {
  No *atual = lista;
  No *anterior = NULL;

  while (atual != NULL) {
    if (atual->letra == letra) {
      if (anterior == NULL) {
        lista = atual->prox;
      } else {
        anterior->prox = atual->prox;
      }
      No *temp = atual;
      atual = atual->prox;
      free(temp);
    } else {
      anterior = atual;
      atual = atual->prox;
    }
  }
  return lista;
}

char obterUltimoElemento(No *lista) {
  if (lista == NULL) {
    return '\0';
  }
  while (lista->prox != NULL) {
    lista = lista->prox;
  }
  return lista->letra;
}

No *unirListas(No *lista1, No *lista2) {
  if (lista1 == NULL) {
    return lista2;
  }
  No *atual = lista1;
  while (atual->prox != NULL) {
    atual = atual->prox;
  }
  atual->prox = lista2;
  return lista1;
}

int main() {
  No *lista1 = NULL;
  No *lista2 = NULL;

  lista1 = inserir(lista1, "ALICE");
  lista2 = inserir(lista2, "DADOS");

  printf("Lista 1:\n");
  imprimirLista(lista1);
  printf("Lista 2:\n");
  imprimirLista(lista2);

  if (listasIguais(lista1, lista2)) {
    printf("As listas são iguais.\n");
  } else {
    printf("As listas são diferentes.\n");
  }

  lista1 = removerCaractere(lista1, 'L');
  printf("Lista 1 após remover 'L':\n");
  imprimirLista(lista1);

  char ultimo = obterUltimoElemento(lista1);
  if (ultimo != '\0') {
    printf("Último elemento da lista 1: %c\n", ultimo);
  } else {
    printf("A lista 1 está vazia.\n");
  }

  No *listaUnida = unirListas(lista1, lista2);
  printf("Lista unida:\n");
  imprimirLista(listaUnida);

  return 0;
}
