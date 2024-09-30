#include <stdio.h>
#include <stdlib.h>

int main()
{
    int taille,i,n;
    printf("saisie la taille du tableau :");
    scanf("%d",taille);
    int T[taille];
    for(i=0;i<taille;i++){
        printf("saisie un nombre :");
        scanf("%d",T[i]);
        printf("%d",T[i]);
    }
    return 0;
}
