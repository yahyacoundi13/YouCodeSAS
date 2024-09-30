#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N1,N2,N3 ;
    float P1,P2,P3 ;
    float SUMP , MOYP ;


    P1=2;
    P2=3;
    P3=5;

    SUMP = P1+P2+P3 ;

    printf("saisie N1:");
    scanf("%d",&N1);
    printf("saisie N2:");
    scanf("%d",&N2);
    printf("saisie N3:");
    scanf("%d",&N3);

    MOYP=((N1*P1)+(N2*P2)+(N3*P3))/ SUMP ;

    printf("la moyenne pondérée de trois nombres :%.2f",MOYP);

    return 0;
}
