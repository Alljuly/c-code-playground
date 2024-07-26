#ifndef CARRO_H
#define CARRO_H

typedef struct {
    float preco;
    char fabricante[50];
    char placa[10];
} Carro;

// Funções para manipular o TAD Carro
Carro criarCarro(float preco, const char* fabricante, const char* placa);
void imprimirCarro(const Carro* carro);
void atualizarCarro(Carro* carro, float novoPreco, const char* novoFabricante, const char* novaPlaca);
int compararPlaca(const Carro* carro, const char* placa);

#endif
