#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b ;
    float res ;
    printf("saisis a:");
    scanf(" %f",&a);
    printf("saisis b:");
    scanf(" %f",&b);

    res = a+b ;
    printf("resultats addition :%.2f\n",res);
    res = a-b ;
    printf("resultats soustraction :%.2f\n",res);
    res = a*b ;
    printf("resultats multiplication :%.2f\n",res);
    res = a/b ;
    printf("resultats division :%.2f\n",res);

    return 0 ;


}

