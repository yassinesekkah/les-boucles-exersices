#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre;

    printf("Entree un nombre : \n");
    scanf("%d", &nombre);

    for(int i=1; i<=nombre; i++){
        printf("%d ", i*2);
    }

    return 0;
}
