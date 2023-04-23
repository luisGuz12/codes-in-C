#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
struct Datos
{
  char nombre[20];
  char domicilio[20];
  char edad[10];
  char estatura[10];
}Datos[40];

int main()
{

  char n_mayor[20];
  char n_menor[20];
  float mayor=0;
  int tam;
  int i;
  float suma;
  float prom;
  int tama=0;

  printf("\n cantidad de jugadores:");
  scanf("%d",&tam);

  for(i=0;i<tam;i++)
    {
      printf("\n nombre:");
      fgets(Datos[i].nombre,20,stdin);
      printf("\n %d.domicilio:",i+1);
      fgets(Datos[i].domicilio,20,stdin);
      printf("\n %d.ingrese la edad:",i+1);
      fgets(Datos[i].edad,10,stdin);
      printf("\n %d.ingrese la estatura:",i+1);
      fgets(Datos[i].estatura,10,stdin);

float Ed=atof(Datos[i].edad);
float Et=atof(Datos[i].estatura);

      suma = suma + Ed;
      prom = suma / tam;

       if(Ed>mayor)
         {
          mayor=Ed;
          strcpy(n_mayor,Datos[i].nombre);
         }
      if(Et<tama)
{ 
tama=Et;
strcpy(n_menor,Datos[i].nombre);
}
    }
    printf("El promedio de edades es: %.2f ",prom);
    printf("\nel jugador mas pequeño es %s y su edad es es %.2f ",n_menor,mayor);

}

