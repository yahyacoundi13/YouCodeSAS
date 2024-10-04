#include <stdio.h>
#include <stdlib.h>
int fact(int n){
    int fac=1;
    int i;
     if( n > 0){
        for(i = 1 ; i<=n ; i++){
            fac = fac * i ;

     }
     printf("fac  du  nombre %d est : %d",n,fac);
    }

}
int main()
{
    int n;

    printf("saisie un nombre :");
    scanf("%d",&n);


    fact(n);



    return 0;
}
