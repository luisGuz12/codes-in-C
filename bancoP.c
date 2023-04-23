#include<stdio.h>
int main()
{
 
     int select;
     float saldo = 100;
 do{
     float agregar,retirar;

     printf("\tBienvenido a su Cajero Virtual");
     printf("\n1.Consultar saldo");
     printf("\n2.deposito a cuenta");
     printf("\n3.Retiro de efectivo");
     printf("\n4. Salir");
     printf("\n Opcion: ");
     scanf("%i",&select);

   switch(select)
        {
          case 1:
          printf("El saldo es de: %.2f", saldo);
          break;

          case 2: printf("\nCuanto dinero desea ingresar de la cuenta: \n");
          scanf("%f", &agregar);
          saldo += agregar;
          break;

          case 3: 
          printf("Cuanto dinero desea retirar:\n");
          scanf("%e",&retirar);
          if(retirar > saldo)
            {
             printf("La cantidad a retirar es mayor al saldo\n");
            }
          else
             {
              saldo -= retirar;
             }

      
          case 4: 
          break;
       
          default: 
          printf("Se equivoco de opcion de menu");
        }
         }while(select !=4);
         return 0;
}

