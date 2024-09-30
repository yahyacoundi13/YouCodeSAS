#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;

    printf("saisie un nombre:");
    scanf("%f",&n);
    if (n > 0){
        printf("le nombre est positif.");
    }else if (n < 0){
        printf("le nombre est negatif.");
    }else{
        printf(" le nombre egal zero HAHA!!");
    }

}
