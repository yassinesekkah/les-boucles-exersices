#include <stdio.h>

int main()
{
    int nombre;
    int chiffre;
    int inverse = 0;

    printf("entree un nombre : \n");
    scanf("%d", &nombre);

    int origine = nombre;


    while(nombre!=0){
        chiffre = nombre % 10;
        inverse = inverse * 10  + chiffre;
        nombre = nombre / 10;

    }
    printf("l'inverse de %d est %d \n", origine, inverse);



    return 0;
}
