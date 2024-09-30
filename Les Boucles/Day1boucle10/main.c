#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,res;

    printf("donner un nombre:");
    scanf("%d",&n);

     res=0;
    for(i=0;i<=n;i++){
        res+=i;
    }printf("resultat est : %d",res);

    return 0;
}
