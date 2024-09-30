#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


int main()
{
    int op;
    double a,b,moyenne;
    double pow;
    double resultat;
    int i;

do{


    printf("|---------menu_principale---------|\n");
    printf("|1.        pour addition        |\n");
    printf("|2. pour soustraction|        \n");
    printf("|3. pour multiplication|        \n");
    printf("|4. pour division|        \n");
    printf("|5. pour moyenne|        \n");
    printf("|6. pour valeur absolue|        \n");
    printf("|7. pour exponentiation|        \n");
    printf("|8. pour racine carree|        \n");
    printf("|0. pour quitter|        \n");
    printf("##---------------------------------## \n");

    printf("valider votre choix");
    scanf("%d",&op);
    printf("donner un nombre a :");
    scanf("%d",&a);
    printf("donner un nombre b :");
    scanf("%d",&b);

    switch(op){

    case 1 :
        printf("a+b : %d",a+b);
        break;

    case 2 :
        printf("a-b : %d",a-b);
        break;

    case 3 :
        printf("a*b : %d",a*b);
        break;

    case 4 :
        if ( a != 0 && b != 0){
        printf("a/b : %d \n",a/b);
        }break;

    case 5 :
        moyenne = a+b / 2 ;
        printf("moyenne des nombres : %d \n", moyenne);
        break;

    case 6 :
        for ( i = 0 , i< a , i--){

        }
    }
}while(op != 0);
    return 0;
}
