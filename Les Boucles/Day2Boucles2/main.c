#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int nb2;
  int  n = 7 ;
    /*
    printf("donner le nombre d-etoiles :\n");
    scanf("%d",&n);*/
    for ( i = 1 ; i <= n ; i++){
        for (j=n;j>i;j--){
            printf(" ");
        }
        for( nb2 = 2; nb2 <= (2*i) ; nb2++){
            printf("*");

        }
        printf(" \n");
    }
    return 0;
}
