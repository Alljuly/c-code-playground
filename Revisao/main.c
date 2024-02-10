/*
1. Faça um programa que declare e inicialize variáveis para guardar: a quantidade de horas
trabalhadas, o valor do salário-mínimo e a quantidade de horas extras trabalhadas. Calcule e mostre
o salário a receber, de acordo com a seguinte fórmula:
salario_a_receber = quantidade de horas trabalhas * valor da hora trabalhada + quantidade de
horas_extras * valor da hora extra.
Sabendo que:
• A hora trabalhada vale 1/8 do salário-mínimo;
• A hora extra vale 1⁄4 do salário-mínimo
*/

#include <stdio.h>


double Payment(double extra, double hours, double base){
    double extraHoursValue = base / 4;
    double normalHoursValue = base / 8;
    double value =0;

    value = (extra * extraHoursValue) + (hours * normalHoursValue) ;


    return value;
}

int main(){
    double normalHours=0;
    double extraHours=0;
    double baseSalary=0;
    double payment=0;


    printf("Hours:\n ");
    scanf("%lf",&normalHours);

        printf("Extra Hours:\n ");
    scanf("%lf",&extraHours);

        printf("Base payment:\n ");
    scanf("%lf",&baseSalary);

    payment = Payment(extraHours, normalHours, baseSalary);
    printf("Payment: %.2f", payment);
    

}