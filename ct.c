#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int pares(){
int par,suma;
 suma=0;
 for(par=1;par<=100;par++)
 {
   suma=suma+par;
 }
 return suma;
}

int main()
{
   int a,b,c;

for(a=0;a<2;a++){
  if(fork()==0){
  if(a==1){
    for(b=0;b<2;b++) {
      if(fork()==0){
if(b==0) 
printf("total = %d\n",pares());
        if(b==1){
          for(c=0;c<1;c++){
            if(fork()!=0){
               break;
            }

          }   
}  
         break;
      }
   }
  }
    break;
}
}

 while(1);
}

