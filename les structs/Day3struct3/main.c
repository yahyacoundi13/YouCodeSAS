#include <stdio.h>
#include <stdlib.h>
struct dimension{
      int longueur;
      int largeur;

};
int AIR(struct dimension rec){
        int longueur;
        int largeur;
        int rec1;

        rec1=longueur*largeur;
        return rec1;
}
int main()
{



    struct dimension rec1={23,46};
    AIR(rec1);
    printf("laire du rectangle est : %d ",rec1);
    return 0;
}
