// este programa realiza la impresion de arreglos
#include<stdio.h>
int main()
{
  int x,y,z;

   printf("ingrese altura deseada:\n");

   scanf("%d",&z);

   for(y=1;y<=z;y++)
   {
    for(x=1;x<=y;x++)

       printf("*");
    
    printf("\n");   
   }
}
