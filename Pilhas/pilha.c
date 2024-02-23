#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

// antes de inserir ou tirar é preciso verificar se a pilha esta vazia
int isVoid(Pilha *pilha) {
  if (pilha->topo == -1) {
    return 1;
  } else {
    return 0;
  }
}

// recebe um numero para colocar no topo da pilha
// realocar espaço na memoria a cada push
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
  if (!isVoid(pilha)) {
    pilha->topo--;
  } else {
    printf("A pilha esta vazia");
  }
}

// listar a pilha atual
void list(Pilha *pilha) {

  int n = pilha->topo;

  if (!isVoid(pilha)) {
    for (int i = n; i <= pilha->tam; i--) {
      if (pilha->vet[i] != 0) {
        printf("%i\n", pilha->vet[i]);
      }
    }
  } else {
    printf("A pilha esta vazia");
  }
}