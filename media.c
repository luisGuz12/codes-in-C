//este programa calcula la media
#include <stdio.h>
int main()
{
int i, tam[10];
float suma;
float media;
printf("calcular la media\n");
for(i = 0;i < 10; i++)
{
printf("Por favor ingrese un valor:");
scanf("%d",&tam[i]);


while(tam[i] < 0){
printf("ingrese un valor valido\n");
scanf("%d",&tam[i]);
}
suma=suma +tam[i];

media= suma / i;
}
printf("la suma general es:%0.2f\n",suma);
printf("la media es:%0.2f\n",media);
return 0;
}
