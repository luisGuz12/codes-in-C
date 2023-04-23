#include<stdio.h>
struct datos
{

char No_control[20];
char Nombre[20];
char Apellido_P[20];
char Apellido_M[20];
char telefono[14];
char domicilio[25];
char estado[25];
} datos[10];


int main(){
int select;
int i;
for(i=0;i<10;i++)
   {
printf("%i.Numero de control:\n ",i+1);
fgets(datos[i].No_control,20,stdin);
printf("%i.Digite su Nombre: \n",i+1);
fgets(datos[i].Nombre,20,stdin);
printf("%i.apellido paterno:\n ",i+1);
fgets(datos[i].Apellido_P,20,stdin);
printf("%i.Apellido Materno:\n ",i+1);
fgets(datos[i].Apellido_M,20,stdin);
printf("%i.Telefono:\n ",i+1);
fgets(datos[i].telefono,14,stdin);
printf("%i.Estado:\n ",i+1);
fgets(datos[i].estado,25,stdin);
printf("%i.Domicilio:\n ",i+1);
fgets(datos[i].domicilio,25,stdin);
}

do{
printf("\n seleccione una opcion");
printf("\n 1. lista el numero de control y nombre con apellidos: ");
printf("\n 2. Datos completos: ");
printf("\n 3. salir\n");
scanf("%d",&select);

switch(select)
{
case 1:
for(i=0;i<10;i++)
 {
printf("\n %i.Numero de control: %s ",i,datos[i].No_control);
printf("\n %i.Nombre: %s ",i,datos[i].Nombre);
printf("\n %i.Apellido paterno: %s ",i,datos[i].Apellido_P);
printf("\n %i.Apellido Materno: %s ",i,datos[i].Apellido_M);
}
break;

case 2:
for(i=0;i<10;i++)
   {
printf("\n %i.numero de control: %s ",i,datos[i].No_control);
printf("\n %i.Nombre: %s ",i,datos[i].Nombre);
printf("\n %i.Apellido Paterno: %s ",i,datos[i].Apellido_P);
printf("\n %i.Apellido Materno: %s ",i,datos[i].Apellido_M);
printf("\n %i telefono: %s",i,datos[i].telefono);
printf("\n %i.Estado: %s",i,datos[i].estado);
printf("\n %i.Domicilio: %s",i,datos[i].domicilio);
}
break;



case 3:
break;

default:
printf("por favor seleccione una opcion valida");
}

}while(select!=3);

return 0;

}



