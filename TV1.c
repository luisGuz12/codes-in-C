#include <stdio.h>

int main(int argc, char** argv){

FILE *temperaturas = fopen("temperaturas.data", "r");

if(!temperaturas){
printf("No se pudo abrir el archivo\n");
return 1;
}
 fclose(temperaturas);
}

