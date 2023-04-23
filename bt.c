#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
   int a,b,c;

for(a=0;a<5;a++){
  if(fork()==0){
  if(a==0){
    for(b=0;b<1;b++) {
      if(fork()==0){
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
  if(a==3){
    for(b=0;b<1;b++) {
      if(fork()==0){
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

