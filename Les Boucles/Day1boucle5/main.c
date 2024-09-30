#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,e,i;
    double r=1.0;
    printf("entrer la base : ");
    scanf("%d",&b);
    printf("entrer l_exposant: ");
    scanf("%d",&e);

    for (i=1;i<=e;i++){
          r=r*b ;

    }printf("%.2f",r);

    return 0;
}
