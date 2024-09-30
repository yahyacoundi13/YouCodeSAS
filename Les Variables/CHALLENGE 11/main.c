#include <stdio.h>
#include <stdlib.h>

int main()
{
    float largeur,longueur,Surface;
    printf("la largeur du rectangle:\n");
    scanf("%f",&largeur);
    printf("la longueur du rectangle:\n");
    scanf("%f",&longueur);

    Surface=longueur*largeur ;
    printf("la surface du rectangle est ; %.2f",Surface);

    return 0;
}
