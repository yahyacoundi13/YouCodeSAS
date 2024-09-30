#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,nbr;
    int min;
    int max;


                                /*remplissage du tableau */
    printf("taper le nombre d'elements dans le tableau : \n");
    scanf("%d",&nbr);
    printf("\n");


    int t[nbr];
    for(i=0;i<nbr;i++){

            printf("saisie un nombre : \n");
            scanf("%d",&t[i]);

    }


    max=0;
    for(i=0;i<nbr;i++){
        if(max<t[i]){
            max=t[i];
        }
    }
    printf("le maxiumum est :%d \n",max);


    min=max;
    for(i=0;i<nbr;i++){
        if(min>t[i]){
            min=t[i];
        }
    }
    printf("le minimum est :%d",min);
    return 0 ;
}
