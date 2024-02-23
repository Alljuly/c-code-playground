#ifndef PILHA_H
#define PILHA_H

struct pilha {
    int tam;
    int topo;
    int *vet;
};
typedef struct pilha Pilha;



int isVoid(Pilha *pilha); 
void pop(Pilha *pilha);
void push(Pilha *pilha); 
void list(Pilha *pilha);


#endif