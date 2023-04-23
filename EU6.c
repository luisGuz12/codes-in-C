#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
 int control;
 char paterno[50];
 char materno[50];
 char nombre[50];
 char direccion[50];
 char telefono[15];
 char electronico[30];
}alum;


int main()
{
char o[5] = "";
int o2 = 0;
do
{
 printf("1.Crear un archivo en binario \n");
 printf("2.realizar registros\n");
 printf("3.cargar lista \n");
 printf("4.consulta de alumnos\n");
 printf("5.correccion de datos\n");
 printf("6.finalizar\n");
 printf("seleccione una opcion:\n");
 fgets(&o, 5, stdin);
 o2 = atoi(o);
 switch (o2)
       {
        case 1:
{
int p;
        FILE *arch;
 arch = fopen("EU6.dat", "wb");
 if (arch == NULL)
 exit(1);
 fclose(arch);
printf("presiones enter para continuar\n");
scanf("%i",&p);
}
        break;

        case 2:
         {
 FILE *arch;
 arch = fopen("EU6.dat", "ab");
 if (arch == NULL)
 exit(1);
int p;
 alum alumno;
 char control[20];
 
 printf("Ingrese el numero de control: ");
 fgets(control,20,stdin);
 alumno.control = atoi(control);


 printf("Ingrese el apellido paterno:");
 fgets(alumno.paterno,50,stdin);


 printf("Ingrese el apellido materno:");
 fgets(alumno.materno,50,stdin);

 printf("Ingrese el nombre del alumno:");
 fgets(alumno.nombre,50,stdin);

 printf("Ingrese la direccion: ");
 fgets(alumno.direccion,50,stdin);

 printf("Ingrese un telefono: ");
 fgets(alumno.telefono,15,stdin);

 printf("Ingrese el correo electronico: ");
 fgets(alumno.electronico,30,stdin);

 fwrite(&alumno, sizeof(alum), 1, arch);
 fclose(arch);
printf("presiones enter para continuar\n");
scanf("%i",&p);
}
         break;

        case 3:

{
int p;
 FILE *arch;
 arch = fopen("EU6.dat", "rb");
 if (arch == NULL)
 exit(1);
 alum alumno;
 fread(&alumno, sizeof(alum), 1, arch);
 while (!feof(arch))
     {
       printf("la matricula es: %i\n",alumno.control);       

printf("El apellido paterno: %s\n el apellido materno:%s\n el nombre del alumno:%s\n ",alumno.paterno,alumno.materno,alumno.nombre);

printf("la direccion: %s\n el telefono es: %s\n el correo electronico es:%s\n",alumno.direccion,alumno.telefono,alumno.electronico);

 fread(&alumno,sizeof(alum), 1, arch);     

}

 fclose(arch);
printf("presiones enter para continuar\n");
scanf("%i",&p);

}
         
         break;

        case 4:

{
      FILE *arch;
 arch = fopen("EU6.dat", "rb");
 if (arch == NULL)
 exit(1);
 printf("Ingrese el numero de control:");
 int a;
 scanf("%i", &a);

 alum alumno;
 int b = 0;
int p;
 fread(&alumno, sizeof(alum), 1, arch);
 while (!feof(arch))
      {
       if (a == alumno.control)
        {

         printf("la matricula es: %i\n",alumno.control);       

printf("El apellido paterno: %s\n el apellido materno:%s\n el nombre del alumno:%s\n ",alumno.paterno,alumno.materno,alumno.nombre);

printf("la direccion: %s\n el telefono es: %s\n el correo electronico es:%s\n",alumno.direccion,alumno.telefono,alumno.electronico);
        b = 1;
         break;
        }
       fread(&alumno,sizeof(alum), 1, arch);
      }
 if (b == 0)
   printf("No hay un registro con ese numero\n");
 fclose(arch);
 printf("presiones enter para continuar");
 scanf("%i",&p);
}

         break;

        case 5:
        {
 FILE *arch;
 arch = fopen("EU6.dat", "r+b");
 if (arch == NULL)
    exit(1);
 printf("Ingrese la matricula:");
 int a;
 scanf("%i", &a);
 alum alumno;
 int g = 0;
 fread(&alumno, sizeof(alum), 1, arch);
 while (!feof(arch))
     {
      if (a == alumno.control)
         {
       printf("matricula:%i\n",alumno.control);       

printf("El apellido paterno: %s\n el apellido materno:%s\n el nombre del alumno:%s\n ",alumno.paterno,alumno.materno,alumno.nombre);

printf("la direccion: %s\n el telefono es: %s\n el correo electronico es:%s\n",alumno.direccion,alumno.telefono,alumno.electronico);
         
int num;
          while((num = getchar()) != '\n' && num != EOF);

          printf("apellido paterno:");
          fgets(&alumno.paterno, 50, stdin);

          printf("apellido materno: ");
          fgets(&alumno.materno, 50, stdin);

          printf("nombre del alumno:");
          fgets(&alumno.nombre, 50, stdin);

          printf("direccion:");
          fgets(&alumno.direccion, 50, stdin);

          printf("telefono:");
          fgets(&alumno.telefono, 15, stdin);


          printf("correo:");
          fgets(alumno.electronico,50,stdin);

          int cal = ftell(arch) - sizeof(alum);
          fseek(arch, cal, SEEK_SET);
          fwrite(&alumno, sizeof(alum), 1, arch);
          printf("Se actualizo el registro\n");
          g = 1;
          break;
        }
     fread(&alumno, sizeof(alum), 1, arch);
    }
    if (g == 0)
    printf("No existe ese registro\n");
    fclose(arch);
int p;
printf("presione enter para continuar");
scanf("%i",&p);
}

         break;
       }
     } while (o2 != 6);
 return 0;
}

