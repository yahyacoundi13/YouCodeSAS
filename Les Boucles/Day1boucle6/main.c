#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,counter=0;


    printf("entre le nombre d_affichage : ");
    scanf("%d",&n);

    do{
            i++;
        if((i%2)==0){
            printf("%d",i);
            counter++;
        }
        continue;
    }while(counter<n);
    return 0;
}
