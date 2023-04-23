#include <stdio.h>

int main(int argc, char** argv){

FILE *temperaturas = fopen("temperatura.data", "r");

if(!temperaturas){
printf("No se pudo abrir el archivo\n");
return 1;
}
do{
 int leido = fgetc(temperaturas); 
 if(leido != EOF){
 printf("%c", (char) leido);
 }else{
 printf("\n FIN  \n");
 }
}while(!feof(temperaturas));


 fclose(temperaturas);
}

