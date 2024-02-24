#include <stdio.h>
#include <stdlib.h>

#include "pilha.c"
#include "pilha.h"

int main() {
  Pilha pilha = {0, -1, 0};
  char aux = ' ';

  while (aux != 's') {
    printf("(i)nserir/(l)istar/(e)xcluir/(s)air: ");
    scanf(" %c", &aux);
    switch (aux) {

    case 'i':
      push(&pilha);
      continue;
    case 'l':
      list(&pilha);
      continue;
    case 'e':
      pop(&pilha);
      continue;
    case 's':
      break;
    }

    return 0;
  }
}