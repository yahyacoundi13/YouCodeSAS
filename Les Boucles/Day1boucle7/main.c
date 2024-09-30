#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbrinverse=0,nbr;

    printf("taper le nombre a inverse :\n");
    scanf("%d",&nbr);

    while(nbr!=0){

        nbrinverse=nbrinverse*10;
        nbrinverse=nbrinverse+(nbr%10);
        nbr=nbr/10;

    }
    printf("le nombre inverse : %d ",nbrinverse);
    return 0;
}
