//este programa solo admite numero positivos en el arreglo
#include <stdio.h>
int main()
{
int i, tam[10];

printf("Por favor ingresa los 10 valores del arreglo\n");
for(i=0; i<10; i++){
printf("ingresa el valor:\n");
scanf("%d",&tam[i]);
while(tam[i] < 0){
printf("ingrese un valor valido\n");
scanf("%d",&tam[i]);
}
}
for(i=0; i < 10; i++)
{
printf("tam[%d] = %d\n",i,tam[i]);
}
}


