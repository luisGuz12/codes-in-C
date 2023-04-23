#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
int a,b,c,d;

int num[1000];
int mayor;
for(int c=0;c<1000;c++)
{
num[c]=rand()%10000;
}
for(int c=0;c<1000;c++)
{
}
for(int c=0;c<1000;c++)
{
if(c==0)
{
mayor=num[c];
}
else
{
if(mayor<num[c])
{
mayor=num[c];
}
}

}
printf("mayor = %d",mayor);
printf("\n R =%d\n",getpid());

    for(a = 0;a < 2;a++){
     if(fork() == 0){
      if(a == 0,1){
       for(b = 0; b < 2;b++){
        if(fork() == 0){       
             if(b == 0,1){
          for(c = 0; c < 2;c++){
             if(fork() == 0){
              if(c == 0,1)break;{
              for(d = 0; d < 2;d++){
             if(fork() == 0){
              if(d !=1)break;{
 
}
 }
          
}
 
}
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
