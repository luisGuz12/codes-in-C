#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>

void sumatoria(void)
{
    int valor[20];
    int x,y;
    int suma=0;

    printf("Sumatoria \n");
    for(x=1; x<=20; x++)
    {
        valor[x]=rand()%20;
    }
    for(x=0; x<20; x++)
    {
        printf("%d \n",valor[x]);
    }
    for(x=0; x<20; x++)
    {
        int n = valor[x];
        suma = suma + n;
    }
    printf("La sumatoria  es de %d \n",suma);
    printf("ID sumatoria: %x \n",pthread_self());
    


}

void matrices(void)
{
    int h[4][4];
    int i[4][4];
    int j[4][4];
    int f,g;
    printf("\n");
    printf("Suma de matrices\n");
    for(f=1; f<=3; f++)
    {
        for(g=1; g<=3; g++)
        {
            h[f][g]=rand()%25;
        }
    }
    for(f=1; f<=3; f++)
    {
        for(g=1; g<=3; g++)
        {
            i[f][g]=rand()%25;
        }
    }
    printf("\n");
    for(f=1; f<=3; f++)
    {
        for(g=1; g<=3; g++)
        {
            j[f][g]=(h[f][1]*i[1][g])+(h[f][2]*i[2][g])+(h[f][3]*i[3][g]);
        }
    }
    printf("\n");
    printf("Matriz 1\n");
    for(f=1; f<=3; f++)
    {
        for(g=1; g<=3; g++)
            printf(" %d ",h[f][g]);
        printf("\n");
    }
    printf("\n");
    printf("Matriz 2\n");
    for(f=1; f<=3; f++)
    {
        for(g=1; g<=3; g++)
            printf(" %d ",i[f][g]);
        printf("\n");
    }

    printf("el resultado: \n");
    for(f=1; f<=3; f++)
    {
        for(g=1; g<=3; g++)
            printf(" %d ",j[f][g]);
        printf("\n");
    }

    printf("ID matriz:%x\n",pthread_self());
}
void euler(void)
{
int F[15];
float a =1;
float e;
for(int i = 1;i <= 15;i++)
{
F[i] = i;
a = a *i;
e = e + 1/a;
}
    printf("\n e = %f",e+1);
    printf("\nID euler%x\n",pthread_self());
}


void factorial(void)
{
    int a,f=1;
    int n =rand()%25;

    printf("\n");
    for(a=1; a<=n; a++)
    {
        f=f *a;
    }
    printf("El factorial de %d es: %d \n",n,f);

    printf("ID factorial:%x\n",pthread_self());

}


int main()
{
    pthread_t hilos[4];
    for(int i=0;i<1;i++)
    {
     pthread_create(&hilos[0],NULL,(void *)factorial,NULL);
     pthread_create(&hilos[1],NULL,(void *)euler,NULL);
     pthread_create(&hilos[2],NULL,(void *)matrices,NULL);
     pthread_create(&hilos[3],NULL,(void *)sumatoria,NULL);
     pthread_join(hilos[i],NULL);
   
    }
   
    return 0;
}

