#include <stdio.h>
#include <stdlib.h>

int main()
{
    float VKH,VMS ;
    printf("la vitesse en kilometres par heure:");
    scanf("%f",&VKH);
    VMS = VKH * 0.27778 ;
    printf("la vitesse en metres par second:%f",VMS);
    return 0;
}
