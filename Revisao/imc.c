/*
2.Faça um programa para exibir a situação do peso de uma pessoa. Essa situação é determinada
através do IMC (Índice de Massa Corpórea).

3.Adapte o código anterior, de modo a fazer a leitura de um número indeterminado de alunos.
*/

#include <stdio.h>
#include <string.h>

double Imc(double height, double weight){
    return weight / ((height/100)*(height/100));
}

char* Msg(double imc){
   static char msg[25];

    if(imc < 20){
       strcpy( msg, "Abaixo do peso");
    } else if(imc >= 20 && imc <= 25){
       strcpy( msg , "Normal");
    } else if(imc >25 && imc <= 30 ){
        strcpy(msg , "Sobre peso");
    } else if(imc >30 && imc <= 40){
       strcpy( msg ,  "Obesidade");
    } else if(imc > 40){
       strcpy( msg , "Obesidade morbida");
    }

    return msg;
}

int main(){
    double heigth = 0, weight=0;



    printf("Height:\n");
    scanf("%lf",&heigth);
    printf("Weigth:\n");
    scanf("%lf",&weight);

    double imc = Imc(heigth,weight);
    char msg[25];



    printf("IMC: %.2lf", imc);

    strcpy(msg, Msg(imc));
    printf("\n%s", msg);



    return 0;

}