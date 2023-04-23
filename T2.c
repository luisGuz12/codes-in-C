#include<stdio.h>

void validar (int n){
if ((n >= 70)&&(n <= 79)){
printf("calificacion suficiente\n");
}else if((n >= 80)&&(n <= 89)){
printf("calificacion bien\n");
}else if((n >= 90)&&(n = 100 )){
printf("calificacion excelente\n");
}else{
printf("Alumno NO aprobado\n");
}
}
int main()
{
validar(80);
printf("esto se ejecuta siempre y cuando se cumpla la funcion\n");
return 0;
}
