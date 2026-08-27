#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculette(float a, float b, char operateur);

float calculette(float a, float b, char operateur)
{
   float total=0;
   
      switch(operateur)
      {
         case '+':
         total=a + b;
         break;
         case '-':
         total=a - b;
         break;
         case '*':
         total=a * b;
         break;
         case '/':
         if(b==0)
         {
            printf("impossible de divider un nombre par 0");
            break;
         }
         else
         {
            total=a / b;
            break;
         }
         default:
         printf("non valide");
         break;
         
      }
   

   return total;

}


int main()
{
   float nombre1=0, nombre2=0, resultat=0;
   char operation=0;
   float resultat_arrondi =0;

   printf("entrez un nombre: ");
   scanf("%e", &nombre1);

   printf("entrez un nombre: ");
   scanf("%e", &nombre2);

   printf("entrez le type d'operation(+,-,/,*): ");
   scanf(" %c", &operation);
   

   resultat=calculette(nombre1, nombre2, operation);

   resultat_arrondi = round(resultat);

   printf("%2.f \n", resultat_arrondi);

   return 0;

}