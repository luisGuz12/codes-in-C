#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
int a,b,c;
    for(a = 0;a < 5;a++){
     if(fork() == 0){
      if(a == 0){
       for(b = 0; b < 3;b++){
        if(fork() == 0){       
             if(b == 1){
          for(c = 0; c < 2;c++){
             if(fork() == 0){
              if(c == 0)break;{
              
             }
           }  
         }
        } 

      break;
      }
    }
  }

if (a == 2){
 for(b = 0; b < 3;b++){
   if(fork() == 0){
     if(b == 1){
      for(c = 0; c < 2;c++){
       if(fork() == 0){
        if(c == 0)break;{
        }
       }
     }  
    }
if(b == 2)
     if(getpid()%2==0)
     {
  printf("si es par");
printf("\n X =%d\n",getpid());
     }else{
    printf("no es par");
printf("\n X =%d\n",getpid());
    }
 break;
  }
 }
}
if (a == 4){
 for(b = 0; b < 3;b++){
   if(fork() == 0){
     if(b == 1){
      for(c = 0; c < 2;c++){
       if(fork() == 0){
        if(c == 0)break;{
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
