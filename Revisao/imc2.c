/*
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

   int opc = 1;
   do {

   printf("Height (cm):\n");
    scanf("%lf",&heigth);
    printf("Weigth (kg):\n");
    scanf("%lf",&weight);

    double imc = Imc(heigth,weight);
    char* msg = Msg(imc);

    printf("IMC: %.2lf", imc);
    printf("\n%s", msg);


      printf("1: Novo ------ 0: Parar\n");
      scanf("%d", &opc);

   } while(opc == 1);
   
    return 0;

}