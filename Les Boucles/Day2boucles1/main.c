#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,res;

    printf("saisie un nombre\n");
    scanf("%d",&n);
    for(i=10;i>=0;i--){
            res = n * i ;
         printf("%d * %d = %d \n",n,i,res);
    }
    return 0;
}
