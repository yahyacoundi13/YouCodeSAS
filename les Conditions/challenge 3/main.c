#include <stdio.h>

int main() {
      int n1,n2,res,tri;


      printf("saisie un nombres :");
      scanf("%d",&n1);
      printf("saisie un nombres :");
      scanf("%d",&n2);
      res=n1+n2 ;
      tri=res*3 ;
      if (n1==n2){
          printf("voila la resultat:%d",tri);

      }else{
          printf("voila la resultat:%d",res);
      }
    return 0;
}
