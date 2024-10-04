#include <stdio.h>
#include <stdlib.h>
int parity(int n){

     if(n%2==0){
        printf("le nombre %d est pair !!!!",n);
     }else{
        printf("le nombre %d est impair !!!",n);
     }


}


int main()
{
    int n;

    printf("taper le nombre a tester :");
    scanf("%d",&n);

    parity(n);

    return 0;
}
