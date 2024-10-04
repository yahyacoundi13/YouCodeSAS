#include <stdio.h>
#include <stdlib.h>

int Somme(int a,int b){
        int sum;
        sum=a+b;
        return sum;
}
int main()
{
    int res;
    int a,b;

    printf("saisie le 1 nombre : ");
    scanf("%d",&a);
    printf("saisie le 2 nombre : ");
    scanf("%d",&b);

    res=Somme(a,b);
    printf("la somme de deux nombres est : %d",res);


    return 0;
}
