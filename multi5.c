// este programa nos imprime los multiplo del numero 5
#include <stdio.h>
int main()
{
int i,tam[10];
printf("por favor ingrese 10 numeros\n");
for(i = 0; i < 10; i++)
{
printf("Por favor ingrese en numero:\n");
scanf("%d",&tam[i]);
}

//visualizar arreglo
for(i = 0; i < 10; i++)
{
printf("tam[%d]= %d\n",i,tam[i]);
}
//multiplos de 5
int conta=0; 
for(i=1; i < 10; i++ )
if(tam[i]%5==0)
{
conta++;
}
printf("Los multiplos de 5 que hay en el arreglo son:%d\n",conta);
}
