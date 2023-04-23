#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
struct Datos
{
char nombre[10];
char N_control[10];
char apellidos[10];
char telefono[10];
char calificacion[10];
};
int main(void)
{
typedef struct Datos alumnos;
char ni[10];
int i;
alumnos alum[20];
printf("ingrese el numero de alumnos a registrar: ");
int n = atoi(fgets(ni, 10, stdin));

for (i = 0; i < n; i++)
{
printf("Alumno %d \n", i + 1);

printf("%d. Escriba su Nombre: ", i + 1);
fgets(alum[i].nombre, 10, stdin);

printf("%d. Escriba sus apellidos: ", i + 1);
fgets(alum[i].apellidos, 10, stdin);

printf("%d. Escriba su no Control: ", i + 1);
fgets(alum[i].N_control, 10, stdin);

printf("%d. Escriba su telefono: ", i + 1);
fgets(alum[i].telefono, 10, stdin);

printf("%d. Escriba su calificacion: ", i + 1);
fgets(alum[i].calificacion, 10, stdin);
printf("\n");
}
char mayor[10];
int M=0;
int califi=0;
int prom=0; 
int menor=0;
int desv = 0; 
int desvR = 0;
;
for (i = 0; i < n; i++)
{
int califi = atoi(alum[i].calificacion);
if (califi > M)
{
M = califi;
}
if (M == califi)
{
strcpy(mayor, alum[i].nombre);
}
prom = prom + califi;
}
prom = prom / n;
for (i = 0; i < n; i++)
{
int cali = atoi(alum[i].calificacion);
desv = desv + pow(2,(califi-prom));
desvR = sqrt(desvR+(desv/(n-1)));        

printf("El nombre  del alumno con mayor promedio es: %s \n", mayor);
printf("El promedio  es general es: %d \n", prom);
printf("La desviacion estandar  es:%d \n", desv);
}
return 0;
}

