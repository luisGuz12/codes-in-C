#include<stdio.h>
#include<stdlib.h>

int main()
{
int v1,v2;
float f1,f2;
FILE *arch;
arch=fopen("archivo2.dat","rb");
if(arch==NULL)
exit(1);

fread(&v1,sizeof(int),1,arch);
printf("primer entero:%i\n",v1);
fread(&v2,sizeof(int),1,arch);
printf("segundo entero:%i\n",v2);

fread(&f1,sizeof(float),1,arch);
printf("el primer float:%0.2f\n",f1);
fread(&f2,sizeof(float),1,arch);
printf("el segundo float:%0.2f\n",f2);
fclose(arch);
return 0;


}
