//este programa calcula la resistencia total de un circuito paralelo
#include<stdio.h>
int main(){
float r1;
float r2;
float r3;
float rt;
printf("calculadora de resistencia total en circuito paralelo\n");
printf("ingrese el valor de la resistencia 1:\n");
scanf("%f",&r1);

printf("ingrese el valor de la resistencia 2:\n");
scanf("%f",&r2);

printf("ingrese el valor de la resistencia 3:\n");
scanf("%f",&r3);

rt = 1 / ((1/r1) +(1/r2)+ (1/r3));

printf("el valor total de la resistencia en el circuito es:%0.2f\n",rt);
}
