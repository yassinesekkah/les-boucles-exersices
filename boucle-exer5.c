#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre, puissance;
    int somme = 1;

    printf("Entree le nombre a elever : \n");
    scanf ("%d", &nombre);

    printf("Entree la puissance à appliquer : \n");
    scanf("%d", &puissance);

    if(puissance == 0)
    {
        printf("Resultat = 1");
    }
    else
    {
        for(int i=1; i<=puissance; i++)
        {
            printf("%d ", nombre);

            if(i<puissance)
            {
                printf("* ");
            }
            somme = somme * nombre;
        }
        printf("= %d", somme);
    }

    return 0;
}
