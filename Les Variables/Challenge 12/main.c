#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N_inverser=0,nbr;

    printf("entrer le nombre a inverser :\n");
    scanf("%d",&nbr);


    while(nbr != 0){
        N_inverser=N_inverser*10;
        N_inverser = N_inverser + nbr%10;
        nbr = nbr/10;
   }
   printf("le nombre inverser est : %d\n",N_inverser);


    return 0;
}
