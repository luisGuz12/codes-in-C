#include <pthread.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
  void* myturn(void * arg) {
int *iptr = (int *)malloc(sizeof(int));
for(int i=0; i < 8; i++)
*iptr = 5;
}
sleep(1);
printf("My turn! %d\n",i,*iptr);
(*iptr)++;
}
return iptr;
}

void yourturn(){
for(int i=0; i < 3; i++)
{
sleep(2);
printf("your turn! %d\n",i);
}
}

int main() {
pthread_t newthread;

int *result;
pthread_create(&newthread, NULL, myturn, NULL);
yourturn();
pthread_join(newthread, &result);
printf("thread's done: *result=%d\n",*result);
}
