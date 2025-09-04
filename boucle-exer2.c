#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int factorial =1;

    printf("Entrez un nombre : \n");
    scanf("%d", &n);

    printf("%d! = ", n);


    for(int i = 1; i <= n; i++ )
    {
        printf("%d", i);
        factorial = factorial * i;

        if(i!=n)
        {
            printf(" * ");
        }

    }
    printf(" = %d", factorial);




    return 0;
}
