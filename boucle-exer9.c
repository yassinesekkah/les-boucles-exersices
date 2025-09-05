#include <stdio.h>

int main()
{
    int nombre;
    int compteur = 0;

    printf("Entree un entier positif :\n");
    scanf("%d", &nombre);

    if (nombre == 0)
    {
        compteur = 1;
    }
    else
    {
        while (nombre > 0)
        {
            nombre = nombre / 10;
            compteur++;
        }
    }

    printf("Le nombre de chiffres est : %d\n", compteur);

    return 0;
}
