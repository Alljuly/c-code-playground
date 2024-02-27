#ifndef QUEUE_H
#define QUEUE_H

struct queue {
    int size;
	float *data;
	int first;
	int last;
	int nItems; 
};
 typedef struct queue Queue;


void newQueue(Queue *q, int s);
void enqueue(Queue *q, int e);
int dequeue(Queue *q);
void listItems(Queue *queue);
int isEmpty(Queue *queue);
int isFull(Queue *ueue);

/*
criação da fila (informar a capacidade no caso de implementação sequencial - vetor);
enfileirar (enqueue) - o elemento é o parâmetro nesta operação;
desenfileirar (dequeue);
mostrar a fila (todos os elementos);
verificar se a fila está vazia (isEmpty);
verificar se a fila está cheia (isFull - implementação sequencial - vetor).
*/



#endif