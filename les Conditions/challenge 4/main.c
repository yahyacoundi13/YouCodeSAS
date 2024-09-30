#include <stdio.h>
#include <math.h>

int main() {
    double a,b,c ;
    double delta,solution1,solution2 ;


    printf("saisie les nombres a et b et c :");
    scanf("%lf %lf %lf",&a,&b,&c);

    delta= b * b - 4 * a * c ;
    if (delta > 0){
        printf("l_equation a deux solution sont :\n");
         solution1 = (-b + sqrt(delta)) / (2 * a);
          solution2 = (-b - sqrt(delta)) / (2 * a);
        printf("la premiere solution est :%lf \n",solution1);
        printf("la deuxieme solution est :%lf",solution2);
    }else if (delta == 0){
        solution1 = -b / (2 * a);

        printf("l_equation a une solution double reelle c_est:%lf \n",solution1);

    }else{
        printf("l_equation n a pas de solution!!!");
    }

    return 0;
}
