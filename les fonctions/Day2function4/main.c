#include <stdio.h>
#include <stdlib.h>
int MAX(int a , int b){
      if(a>b) return b;
       else return a;
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
    res=MAX(a,b);
    printf("la resultat du minimum de deux nombres : %d",res);
    return 0;
}
