#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"

int main() {
  // ao criar a pilha preciso passar o tamanho, topo, e vet
  Pilha pilha = {0, -1, NULL};
  char aux = ' ';

  while (aux != 's') {
    printf("(i)nserir/(l)istar/(e)xcluir/(s)air: ");
    scanf(" %c", &aux);
    switch (aux) {

    case 'i':
      push(&pilha);
      break;
    case 'l':
      list(&pilha);
      break;
    case 'e':
      pop(&pilha);
      break;
    }

    return 0;
  }
}