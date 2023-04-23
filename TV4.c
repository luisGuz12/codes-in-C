#include <stdio.h>

int main(int argc, char** argv){

FILE *temperaturas = fopen("temperatura.data", "r");

if(!temperaturas){
printf("No se pudo abrir el archivo\n");
return 1;
}

 char buffer[80];

 
 if(fgets (buffer, 80, temperaturas)){
 printf("%s\n", buffer);
 }
 
 if(fgets (buffer, 80, temperaturas)){
 printf("%s\n", buffer);
 }

 fclose(temperaturas);
}
