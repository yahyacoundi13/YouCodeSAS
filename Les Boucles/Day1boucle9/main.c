#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,counter;

    printf("saisie un nombre :\n");
    scanf("%d",&n);

    counter=0;
    do{
        n=n/10;
        counter++;

    }while(n!=0);
    printf("le nombre contient %d chiffres",counter);
    return 0;
}
