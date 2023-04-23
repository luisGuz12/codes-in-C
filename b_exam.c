#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
int a,b,c;
    for(a = 0;a < 3;a++){
     if(fork() == 0){
      if(a == 0){
       for(b = 0; b < 4;b++){
        if(fork() == 0){       
             if(b == 1){
          for(c = 0; c < 2;c++){
             if(fork() == 0){
              if(c == 0)break;{
              
             }
           }  
         }
        } 
 if(b == 3){
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
 for(b = 0; b < 4;b++){
   if(fork() == 0){
     if(b == 1){
if(getpid()%3==0)
     {
  printf("si es multiplo");
printf("\n X =%d\n",getpid());
     }else{
    printf("no es multiplo");
printf("\n X =%d\n",getpid());
    }
      for(c = 0; c < 2;c++){
       if(fork() == 0){
        if(c == 0)break;{
        }
       }
     }  
    }
if(b == 3){
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
