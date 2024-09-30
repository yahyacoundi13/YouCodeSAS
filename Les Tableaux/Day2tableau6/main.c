#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,n,nbr,f,res;



                                /*remplissage du tableau */
    printf("taper le nombre d'elements dans le tableau : \n");
    scanf("%d",&nbr);
    printf("------------------------------------------- \n");


    int t[nbr];

    for(i=0;i<nbr;i++){

            printf("saisie un nombre : \n");
            scanf("%d",&t[i]);

    }
    printf("------------------------------------------- \n");
    printf("entrer le facteur de multiplication :");
    scanf("%d",&f);
    printf("------------------------------------------- \n");
    for (i=0;i<nbr;i++){
        res=f*t[i];
        printf("resultat est : %d \n",res);
    }


   return 0;
}
