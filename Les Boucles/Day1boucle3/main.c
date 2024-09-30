#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,r=0;

    printf("saisie un nombre :");
    scanf("%d",&n);

    for(i=1 ; i <= n ; i++){
        r += i ;
        }
        printf("%d",r);

    return 0;
}
