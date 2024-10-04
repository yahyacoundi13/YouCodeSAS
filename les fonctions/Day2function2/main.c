#include <stdio.h>
#include <stdlib.h>

int mult(int a, int b){
        int mt=a*b;
        return mt;

}
int main()
{

    int a,b,res;

    printf("-----------------------\n");
    printf("taper le 1 nombre : \n");
    scanf("%d",&a);
    printf("-----------------------\n");
    printf("taper le 2 nombre : \n");
    scanf("%d",&b);
    printf("-----------------------\n");

    res=mult(a,b);
    printf("la resultat du multiplication de deux nombres est : %d ",res);


    return 0;
}
