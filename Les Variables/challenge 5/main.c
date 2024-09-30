#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C;
    printf("la température d eau en Celsius:\n");
    scanf("%f",&C);
    if (C < 0) {
        printf("EAU Solide");
        }
    else if (C >= 0 && C < 100) {
        printf(" EAU Liquide");
    }
    else {
        printf("GAZ");
    }
    return 0;
}
