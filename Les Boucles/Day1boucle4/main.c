#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,counter=0;
    printf("taper un nombre:");
    scanf("%d",&n);

    do{
            i++;
    if((i%2)!= 0){
            printf("%d",i);
            counter++;
         }
    }while(counter<n);

    return 0;
}
