#include<pthread.h>
#include<unistd.h>
#include<stdio.h>
#include <math.h>

//para compilar debemos de porner gcc nombre del archivo -pthread

void Trapecio()
{
int b1;
int b2;
int altura;
int areaT;

printf("ingrese los valores del trapecion\n");
printf("\nEscriba el valor de escriba el valor de la primer base: ");
scanf("%d",&b1);

printf("\nescriba el valor de la siguiente base: ");
scanf("%d",&b2);

printf("\nEscriba el valor de la altura: ");
scanf("%d",&altura);

areaT= (b1 + b2)*altura;
areaT = areaT/2;
printf("el area es:%d\n",areaT);

}
void Areac()
{
  double pi=3.1416;
  double radio;
  double area;
printf("ingrese los valores del Circulo\n");
printf("\nEscriba el valor del radio: ");
scanf("%lf",&radio);
  area=pi*pow(2,(radio));
printf("\n El area del  circulo es: %f\n",area);
}

void main()
{
  pthread_t hilo1,hilo2;
  pthread_create(&hilo1,NULL,(void *)Trapecio,NULL);
  pthread_join(hilo1,NULL);

pthread_create(&hilo2,NULL,(void *)Areac,NULL);
  pthread_join(hilo2,NULL);


}
