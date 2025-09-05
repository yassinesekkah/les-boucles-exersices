#include <stdio.h>

int main() {

    int n;

    printf("Entrez le nombre de termes de la suite de Fibonacci que vous voulez afficher :\n");
    scanf("%d", &n);

    int f0 = 0, f1 = 1, fn;

    if (n >= 1) printf("%d ", f0);
    if (n >= 2) printf("%d ", f1);

    for (int i = 2; i < n; i++) {
        fn = f0 + f1;
        printf("%d ", fn);
        f0 = f1;
        f1 = fn;
    }

    return 0;
}
