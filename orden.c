//nos ordena y imprime el arreglo
#include<stdio.h>
int main()
{
 int tam[15];
 int i;
int x; 
int w;
int order;
 for(i=0;i<=14;i++)
{
printf("por favor ingrese su numero:");
scanf("%d",&tam[i]);
}
for(i=0;i<=14;i++)
{
for(x=0,w=1;w<=14;x++,w++)
{
if(tam[x]>tam[w])
{
order=tam[w];
tam[w]=tam[x];
tam[x]=order;
}
}
}
for(i=0;i<=14;i++)
{
printf(" el arreglo ordenado es tam[%d] = %d\n",i,tam[i]);
}
return 0;
}

