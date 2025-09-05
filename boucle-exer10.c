#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i =1;
    int somme =0;

    printf("entree un nombre n :\n");
    scanf("%d", &n);

    /*  while(i<=n)
      {
          printf("%d ", i);
          somme = somme + i;      // avec boucle while
          if(i<n){
              printf("+ ");
          }
          i++;
      }   */


    /*  for(i=1; i<=n; i++){
          printf("%d ", i);
          somme = somme + i;      // avec boucle for
          if(i<n){
              printf("+ ");
          }
      }    */

    somme = n * (n + 1) / 2;

    for(i=1; i<=n; i++)
    {
        printf("%d ", i);         // avec boucle for et formule mathematique
        if(i<n)
        {
            printf("+ ");
        }
    }

    printf("= %d \n", somme);

    return 0;
}
