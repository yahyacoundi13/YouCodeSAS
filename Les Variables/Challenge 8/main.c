#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c ;
    float MOYG ;

    printf("saisie Nombre A :");
    scanf("%f",&a);
    printf("saisie Nombre B :");
    scanf("%f",&b);
    printf("saisie Nombre C :");
    scanf("%f",&c),

    MOYG = pow((a * b * c),(1.0/3.0));
    printf("moyenne : %.2f",MOYG);

    return 0;
}
