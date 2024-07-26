#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Ponto;

typedef struct {
    Ponto centro;
    float raio;
} Circulo;

Ponto criarPonto(float x, float y) {
    Ponto p;
    p.x = x;
    p.y = y;
    return p;
}

Circulo criarCirculo(float x, float y, float raio) {
    Circulo c;
    c.centro = criarPonto(x, y);
    c.raio = raio;
    return c;
}

float calcularArea(Circulo c) {
    return M_PI * c.raio * c.raio;
}

float calcularCircunferencia(Circulo c) {
    return 2 * M_PI * c.raio;
}

int pontoDentroDoCirculo(Circulo c, Ponto p) {
    float distancia = sqrt(pow(p.x - c.centro.x, 2) + pow(p.y - c.centro.y, 2));
    return distancia <= c.raio;
}

void imprimirCirculo(Circulo c) {
    printf("Centro: (%.2f, %.2f)\n", c.centro.x, c.centro.y);
    printf("Raio: %.2f\n", c.raio);
    printf("Area: %.2f\n", calcularArea(c));
    printf("Circunferencia: %.2f\n", calcularCircunferencia(c));
}

int main() {
    Circulo c = criarCirculo(0.0, 0.0, 5.0);

    imprimirCirculo(c);

    Ponto p1 = criarPonto(3.0, 4.0);
    Ponto p2 = criarPonto(6.0, 0.0);

    if (pontoDentroDoCirculo(c, p1)) {
        printf("O ponto (%.2f, %.2f) está dentro do círculo.\n", p1.x, p1.y);
    } else {
        printf("O ponto (%.2f, %.2f) não está dentro do círculo.\n", p1.x, p1.y);
    }

    if (pontoDentroDoCirculo(c, p2)) {
        printf("O ponto (%.2f, %.2f) está dentro do círculo.\n", p2.x, p2.y);
    } else {
        printf("O ponto (%.2f, %.2f) não está dentro do círculo.\n", p2.x, p2.y);
    }

    return 0;
}
