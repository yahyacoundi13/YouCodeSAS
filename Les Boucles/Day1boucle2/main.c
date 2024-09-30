#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,fac = 1;

    printf("tapez un nombre :\n");
    scanf("%d",&n);

    if( n > 0){
        for(i = 1 ; i<=n ; i++){
            fac = fac * i ;
     }printf("%d! = %d \n",n,fac);
    }else{printf(" error !!");}
    return 0;
}
