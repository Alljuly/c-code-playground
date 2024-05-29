# Busca e Ordenação

### Busca Sequencial
Esse código busca a posição de um elemento contido em um vetor de outros elementos do mesmo tipo.


```C
int buscarPosicao(int e, int v[], int t)
```

   
- A função acima tem como argumentos:
    - int e: o elemento que se deseja descobrir a posição.
    - int v[ ]: o vetor de elementos.
    - int t: passamos o tamanho do vetor;

```C
for (int i = 0; i <= t; i++) {
    if (v[i] == e) {
      return i;
    }
  }
```

Por meio de um laço repetição simples buscamos o elemento dentro do vetor informado e retornamos suas posição (i);

Essa solução apesar de simples não é sempre indicada por se tratar se uma busca numa sequencia linear, o que em grandes escalas pode se tornar mais lenta que outros métodos de busca.

### Busca Binária
No caso de vetores com grande volume de dados a busca binária se torna a resposta mais otimizada. Essa função consiste em dividir um vetor ao meio repetidamente até encontrar o elemento desejado. Para que a busca binária funcione corretamente, o vetor deve estar previamente ordenado. 

```C
int buscaBinaria(int e, int v[], int t)
```
 - A função acima tem como argumentos:
    - int e: o elemento que se deseja descobrir a posição.
    - int v[ ]: o vetor de elementos.
    - int t: passamos o tamanho do vetor;

<br>

```C
int i = 0, f = t - 1;
```
- Os atributos acima representam a primeira (i) e a última posição (f) do vetor

```C
  while (i <= f) {
    int m = (i + f) / 2;

    if (v[m] == e) {
      return m;
    } else if (v[m] < e) {
      i = m + 1;
    } else {
      f = m - 1;
    }
  }
```
  - Em seguida, verifica-se qual é o elemento do meio do vetor.
    - Se o elemento do meio *m* for menor do que o *int e* i é reatribuido para procurar na metade a direita.
    - Se o elemento do meio *m* for maior do que o *int e* i é reatribuido para procurar na metade a esquerda.
    - Assim que o elemento é encontrado ele é retornado.

### BubbleSort

  Esse método de ordenação percorre um vetor repetidamente ordenando seus elementos.


### QuickSort


