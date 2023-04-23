#include<stdio.h>
#include<stdlib.h>

int main()
{
int v1,v2;
float f1,f2;
printf("ingrese el primer entero: ");
scanf("%i",&v1);
printf("ingrese el segundo valor: ");
scanf("%i",&v2);
printf("ingrese el primer float: ");
scanf("%e",&f1);
printf("ingrese el segundo valor: ");
scanf("%e",&f2);
FILE *arch;
arch=fopen("archivo2.dat","wb");
if(arch==NULL)
exit(1);
fwrite(&v1,sizeof(int),1,arch);
fwrite(&v2,sizeof(int),1,arch);
fwrite(&f1,sizeof(float),1,arch);
fwrite(&f2,sizeof(float),1,arch);
fclose(arch);
printf("se creo el archivo binario y se almacenaron los 4 digitos");
return 0;


}
