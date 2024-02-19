/*
Escreva uma função recursiva potencia(base, expoente) que, quando chamada, retorna
baseexpoente. Por exemplo, potencia(3,4) = 3*3*3*3. Assuma que expoente é um inteiro maior
ou igual a 0.
*/

#include <stdio.h>


int potencia(int n, int m){
    if(m <= 0){
         return 1;
    } 
        
    else {
        return n * potencia(n, m - 1);
    }
}

int main(){
   int res = potencia(3, 4);

   printf("%d", res);
    return 0;

}