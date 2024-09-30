#include <stdio.h>
#include <stdlib.h>

int main() {
    char operateur;
    int nbre1, nbre2;
    int result;

    printf("Bienvenue dans la mini calculatrice !\n");
    printf("Choisissez un opérateur (+,-,*,/,%%) : ");
    scanf(" %c", &operateur);

    printf("Choisissez le premier nombre : ");
    scanf("%d", &nbre1);

    printf("Choisissez le second nombre : ");
    scanf("%d", &nbre2);

    if (operateur == '+') {
        result = nbre1 + nbre2;
        printf("Le résultat est : %d\n", result);
    }
    else if (operateur == '-') {
        result = nbre1 - nbre2;
        printf("Le résultat est : %d\n", result);
    }
    else if (operateur == '*') {
        result = nbre1 * nbre2;
        printf("Le résultat est : %d\n", result);
    }
    else if (operateur == '/') {
        if (nbre2 != 0) {
            result = nbre1 / nbre2;
            printf("Le résultat est : %d\n", result);
        } else {
            printf("Erreur : Division par zéro!\n");
        }
    }
    else if (operateur == '%') {
        if (nbre2 != 0) {
            result = nbre1 % nbre2;
            printf("Le résultat est : %d\n", result);
        } else {
            printf("Erreur : Division par zéro!\n");
        }
    }
    else {
        printf("Opérateur invalide !\n");
    }

    return 0;
}

