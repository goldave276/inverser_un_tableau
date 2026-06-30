#include <stdio.h>
#include <stdlib.h>


int main()
{
   // inverser un tableau
   int a;

   printf("\n Veuillez donner le nombre de valeurs");
   scanf("\n%d",&a);

   int tab[a];

   printf("\nVeuillez enter vos valeurs");
   for(int i = 0; i < a; i++)
   {
       scanf("\n%d", &tab[i]);
   }

    printf("\nLe tableau inverse est:");

   for(int i = 0; i < a/2; i++)
   {
        int temp = tab[i];
       tab[i] = tab[a-1-i];
       tab[a-1-i] = temp;
   }

    for(int i = 0; i < a; i++)
    {
        printf("\n%d", tab[i]);
    }

    return 0;
}
