#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define PI 3.14


int main()
{
    float r,volume;

    printf("le rayon de la sphere\n");
    scanf("%f",&r);

    volume=(4/3)*PI*pow(r,3);
    printf("le volume de la sphere:%f",volume);

    return 0;
}
