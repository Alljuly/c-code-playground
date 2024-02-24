#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

int isEmpty(Pilha *pilha) {
  if (pilha->topo == -1) {
    return 1;
  } else {
    return 0;
  }
}

void push(Pilha *pilha) {
  int i;
  pilha->tam++;

  pilha->vet = (int *)realloc(pilha->vet, pilha->tam * sizeof(int));

  printf("Novo elemento:\n");
  scanf("%d", &i);

  pilha->topo++;
  pilha->vet[pilha->topo] = i;
}

// remove o topo da pilha
void pop(Pilha *pilha) {
  if (!isEmpty(pilha)) {
    pilha->topo--;
  } else {
    printf("A pilha esta vazia");
  }
}

// listar a pilha atual
void list(Pilha *pilha) {

  int n = pilha->topo;

  if (!isEmpty(pilha)) {
    for (int i = n; i >= 0; i--) {

      printf("posicao: %i %i\n", i, pilha->vet[i]);
    }
  } else {
    printf("A pilha esta vazia");
  }
}