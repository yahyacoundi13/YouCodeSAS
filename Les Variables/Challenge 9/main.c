#include <stdio.h>
#include <stdlib.h>
#include <math.h>





int main() {
    double x1,x2,y1,y2,z1,z2 ;
    double distance ;


    printf("donner les coordonnes des premier points x1,y1,z1 :");
    scanf("%lf,%lf,%lf",&x1,&y1,&z1);

    printf("donner les coordonnes des deuxieme points x2,y2,z2 :");
    scanf("%lf,%lf,%lf",&x2,&y2,&z2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

    printf("la distance entre les deux points :%lf",distance);

    return 0;
}
/*

    double calculateDistance(double x1, double y1, double z1, double x2, double y2, double z2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

    }
int main() {
    double x1, y1, z1, x2, y2, z2;

    // Saisir les coordonnées des points
    printf("Entrez les coordonnées du premier point (x1, y1, z1) : ");
    scanf("%lf %lf %lf", &x1, &y1, &z1);

    printf("Entrez les coordonnées du deuxième point (x2, y2, z2) : ");
    scanf("%lf %lf %lf", &x2, &y2, &z2);

    // Calculer la distance
    double distance = calculateDistance(x1, y1, z1, x2, y2, z2);

    // Afficher le résultat
    printf("La distance entre les points est : %.2f\n", distance);

    return 0;
}
*/

