/*
 Funciones de retorno en C
*/
#include<stdio.h>//directiva include
//funcion main inicia el programa
int suma();
int num3=2;
int main()
{
int num1,num2;
printf("ingresa el primer valor:\n");
scanf("%i",&num1);
printf("ingrese el segundo valor:\n");
scanf("%i",&num2);
printf("El resultado es: %i\n", suma(num1,num2));
return 0;//indica que el programa se termino con exito 
}//fin de la funcion main
int suma(int num1, int num2)
{
  
 int suma = num1 + num2 + num3;
return suma;
}
