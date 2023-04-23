#include <stdio.h>

int main(int argc, char** argv){

FILE *temperaturas = fopen("temperaturas.data", "a");

if(!temperaturas){
printf("No se pudo abrir el archivo\n");
return 1;
}
 

 fseek(temperaturas, 0, SEEK_END);
 long tam = ftell(temperaturas);
 rewind(temperaturas);
 printf("El archivo tiene %ld bytes\n", tam);
 
 fclose(temperaturas);
}
