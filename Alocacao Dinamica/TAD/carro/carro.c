#include "carro.h"
#include <stdio.h>
#include <string.h>

Carro criarCarro(float preco, const char* fabricante, const char* placa) {
    Carro carro;
    carro.preco = preco;
    strncpy(carro.fabricante, fabricante, sizeof(carro.fabricante));
    strncpy(carro.placa, placa, sizeof(carro.placa));
    return carro;
}

void imprimirCarro(const Carro* carro) {
    printf("Preco: %.2f\n", carro->preco);
    printf("Fabricante: %s\n", carro->fabricante);
    printf("Placa: %s\n", carro->placa);
}

void atualizarCarro(Carro* carro, float novoPreco, const char* novoFabricante, const char* novaPlaca) {
    carro->preco = novoPreco;
    strncpy(carro->fabricante, novoFabricante, sizeof(carro->fabricante));
    strncpy(carro->placa, novaPlaca, sizeof(carro->placa));
}

int compararPlaca(const Carro* carro, const char* placa) {
    return strcmp(carro->placa, placa) == 0;
}
