/*
 Funciones Basicas en C
*/
#include<stdio.h>//directiva include
//funcion main inicia el programa
/*void saludo()
{
printf("Hola codigofacilito\n");
return;
}*/
int suma();
int main()
{
printf("%i\n", suma());
return 0;//indica que el programa se termino con exito 
}//fin de la funcion main
int suma()
{
 int num1 = 12;
 int num2 = 4;  
 int suma = num1 + num2;
return suma;
}
