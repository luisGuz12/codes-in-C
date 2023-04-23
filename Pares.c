//programa que calcula lo numeros pares que hay 
#include<stdio.h>

int pares(){
int par,i=0;
for(par = 1;par <= 10000;par++){

if(par % 2 == 0){

i = i + 1;

}
}
return i;
}
int main()
{
printf("Existen %d numeros pares en [1,10000]\n",pares());
}
