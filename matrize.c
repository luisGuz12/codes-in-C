#include <stdio.h>

#define FB 4
#define CB 3
#define FA 4
#define CA 4



int main(void) {

   int  MZA [FA][CA] =  {
            {1, 0, 0, 0},
            {2, 1, 1, 2},
            {3, 2, 1, 2},
            {4, 3, 1, 2},
    };
    int MZB [FB][CB]  =  {
            {1, 6, 1},
            {2, 2, 0},
            {0, 1, 1},
            {1, 1, 0},
    };

    if (CA != FB) {
        printf("Columnas  deben ser igual a filas de la matriz B");
        return 0;
    }
    //Lugar en donde se almacena el resultado
    int p[FB][CB];

    // Necesitamos hacer esto por cada columna de la segunda matriz (B)
    for (int m = 0; m < CB; m++) {
        // Dentro recorremos las filas de la primera (A)
        for (int n = 0; n < FA; n++) {
            int sum = 0;
            // Y cada columna de la primera (A)
            for (int b = 0; b < CA; b++) {
                // Multiplicamos y sumamos resultado
                sum += MZA[n][b] * MZB[b][m];
            }
            // Lo acomodamos dentro del producto
            p[n][m] = sum;
        }
    }
 printf("matriz a \n");
      for(int g=0; g < FA; g++){
       for(int h=0; h < CA; h++){
     printf("%d ",MZA[g][h]);
    
}
printf("\n");
 } 

 printf("matriz b \n");
      for(int e=0; e < FB; e++){
       for(int r=0; r < CB; r++){
     printf("%d ",MZB[e][r]);
    
}
printf("\n");
 } 

  printf("resultado de la multiplicacion\n");
    for (int r = 0; r < FB; r++) {
        for (int t = 0; t < CB; t++) {
            printf("%d ", p[r][t]);
        }
        printf("\n");
    }
}
