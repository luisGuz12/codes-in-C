#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define name " Guzman Jimenez Luis Alfonso "

int primero(int num)
{
    if (num == 0 || num == 1)
        return 0;
    if (num == 4)
        return 0;
    for (int a = 2; a < num / 2; a++)
    {
        if (num % a == 0)
            return 0;
    }
    return 1;
}

void funcion()
{
    FILE *primeroFile;
    int b = 0;
    int c = 0;
    primeroFile = fopen("primeronumeros.dat", "wb");
    if (primeroFile == NULL)
    {
        exit(1);
    }
    int nume;
    printf("Ingrese un limite maximo: \n");
    scanf("%d", &nume);
    for (int d = 0; d <= nume; d++)
    {
        if (primero(b))
        {
            fwrite(&b, sizeof(int), 1, primeroFile);
            c++;
        }
    }
    fclose(primeroFile);
    mostrar(c);
}

void mostrar(int numer)
{
    FILE *primeroFile;
    int v1;
    primeroFile = fopen("primeroNumberos.dat", "rb");
    if (primeroFile == NULL)
    {
        exit(1);
    }
    int numeros = 0;
    int i = 0;
    while (i <= numer || !feof(primeroFile))
    {
        fread(&v1, sizeof(int), 1, primeroFile);
        printf("%i\n",v1);
        numer = v1;
        i++;
    }
    fclose(primeroFile);
}

void nombre()
{
      int a;
    printf("ingrese su nombre\n");
    scanf("%i",&a);
}

int main()
{
   funcion();
    nombre();
    return 0;
}

