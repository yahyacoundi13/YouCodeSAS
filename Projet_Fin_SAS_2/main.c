#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


#define max 100

typedef struct{
        char nom[50];
        char prenom[50];
        char telephone[15];
        int age;
        char statut[20];
        int id;
        char date[20];

}reservations;
reservations res_details[max]={

                {"coundi","yahya","0745635423",21,"valide",1,"05/10/2024",},
                {"ANAS","TFITFI","06789340739",23,"valide",2,"05/10/2024",},
                {"mazine","FRIFIRA","076542328212",18,"valide",3,"05/10/2024",},
                {"mouad","tewil","06485978212",20,"annule",4,"05/10/2024",},
                {"ayoub","nemer","0642824254",18,"valide",5,"05/10/2024",},
                {"DOUNIA","dounia","073849023",18,"valide",6,"06/10/2024",},
                {"MERYEM","SALHI","078436923234",18,"raporté",7,"10/10/2024",},
                {"MOHAMMED","MOHAMMED","0765728438212",18,"valide",8,"05/10/2024",},
                {"ANWAR","M3AYSEB","06624894212",18,"traite",9,"11/10/2024",},
                {"AMIR","BAHJA","0765438212",18,"valide",10,"05/10/2024",},
};

int idres=10;
int total_reservations = 10;


bool date_valide(const char *date) {
    int jour, mois, annee;
    if (sscanf(date, "%d/%d/%d", &jour, &mois, &annee) != 3) {
        return false;
    }
    if (mois < 1 || mois > 12 || jour < 1) {
        return false;
    }
    int jours_dans_mois[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
}

void ajouter(){
    int C;
    int i;
    int nbr;


    reservations new_reservation;
    /*new_reservation.id = idres++;*/


    if (total_reservations >= max){
        printf("Maximum reservations reached.\n");
        return;
    }else if(total_reservations < max){
        printf("saisie 1 pour ajouter un seul RESERVATION.\nsaisie 0 un ajouter des multiple RESERVATIONS : ");
        scanf("%d",&C);
        if (C == 1){

                new_reservation.id = idres++;
                printf("entrer votre nom : ");
                scanf("%s",new_reservation.nom);
                printf("entrer votre prenom : ");
                scanf("%s",new_reservation.prenom);
                printf("entre votre numero de telephone : ");
                scanf("%s",new_reservation.telephone);
                printf("entrer votre age : ");
                scanf("%d",&new_reservation.age);
                printf("votre ID : %d \n",idres);
                printf("\n");
                printf("entrer la date : \n");
                scanf("%s",new_reservation.date);
                printf("1-pour valide votre reservation. \n2-pour raporte votre reservation. \n3- pour annule votre reservation. \n4- Pour Traité votre reservation.\n");
                scanf("%s",&new_reservation.statut);

                if (strcmp(new_reservation.statut, "1") == 0) {
                        printf("la reservation est valide.\n");
                        res_details[total_reservations++] = new_reservation;
                        printf("Reservation added successfully.\n");
                } else if (strcmp(new_reservation.statut, "2") == 0) {
                        printf("la reservation est raporte.\n");
                        res_details[total_reservations++] = new_reservation;
                        printf("Reservation added successfully.\n");
                }else if (strcmp(new_reservation.statut, "3") == 0){
                        printf("la reservation est annule.");

                }else if (strcmp(new_reservation.statut, "4") == 0){
                        printf("la reservation est traite.");
                }else{
                    printf("ERROOOR!!!!!!");
                }
                /*res_details[total_reservations++] = new_reservation;
                printf("Reservation added successfully.\n");*/


               /* switch(new_reservation.statut){
                case 1:
                    printf("la reservation est valide.");
                break;
                case 2:
                    printf("la reservation est raporte.");
                break;

                case 3:
                    printf("la reservation est annule.");
                break;
                case 4:
                    printf("la reservation est traite.");
                break;
                default:
                    printf("Error!!!!!!");

                }*/

        }else if(C == 0){

            printf("enter le nombre des reservations:");
            scanf("%d",&nbr);

            for ( i=0;i<nbr;i++){
                new_reservation.id = idres++;
                printf("entrer votre nom : ");
                scanf("%s",new_reservation.nom);
                printf("entrer votre prenom : ");
                scanf("%s",new_reservation.prenom);
                printf("entre votre numero de telephone : ");
                scanf("%s",new_reservation.telephone);
                printf("entrer votre age : ");
                scanf("%d",&new_reservation.age);
                printf("votre ID : %d ",idres);
                printf("\n");
                printf("entrer la date : \n");
                scanf("%s",new_reservation.date);
                printf("1-pour valide votre reservation. \n2-pour raporte votre reservation. \n3- pour annule votre reservation. \n4- Pour Traité votre reservation.\n");
                scanf("%s",new_reservation.statut);

                /*switch(new_reservation.statut){
                    case 1:
                    printf("la reservation est valide.");
                        break;
                    case 2:
                    printf("la reservation est raporte.");
                        break;

                    case 3:
                    printf("la reservation est annule.");
                        break;
                    case 4:
                    printf("la reservation est traite.");
                        break;
                    default:
                    printf("Error!!!!!!");

                    }*/
                    if (strcmp(new_reservation.statut, "1") == 0) {
                        printf("la reservation est valide.\n");
                        res_details[total_reservations++] = new_reservation;
                        printf("Reservation added successfully.\n");
                } else if (strcmp(new_reservation.statut, "2") == 0) {
                        printf("la reservation est raporte.");
                        res_details[total_reservations++] = new_reservation;
                        printf("Reservation added successfully.\n");
                }else if (strcmp(new_reservation.statut, "3") == 0){
                        printf("la reservation est annule.");

                }else if (strcmp(new_reservation.statut, "4") == 0){
                        printf("la reservation est traite.");
                }else{
                    printf("ERROOOR!!!!!!");
                }

                /*res_details[total_reservations++] = new_reservation;
                printf("Reservation added successfully.\n");*/
            }



        }else{
            printf("ERROOR!!!!!!!!!!!\n");
        }
}
}

void afficher(int total_reservations){
    int i;


    if(total_reservations == 0) printf("BAAAAA7 , pas de reservation pour le moment.");
    else{
        for(i = 0;i < total_reservations; i++){

            printf("ID de reservation : %d\n",res_details[i].id);
            printf("le nom :%s\n",res_details[i].nom);
            printf("le prenom :%s\n",res_details[i].prenom);
            printf("le numero du telephone :%s\n",res_details[i].telephone);
            printf("AGE :%d\n",&res_details[i].age);
            printf("LA DATE DE RESERVATION : \n",res_details[i].date);
            printf("statut de reservation :%s\n",res_details[i].statut);
            printf("\n");
            printf("__________________________\n");
            printf("\n");

        }
    }
}

void modifier(){

    int nidres , trouve = -1 , count ;

    printf("Entrez la reference de la reservation a modifier : ");
    scanf("%d", &nidres);

    for (int i = 0; i < idres; i++) {
        if (res_details[i].id == nidres) {
            trouve = i;
            break;
        }
    }

    if (trouve == -1) {
        printf("Aucune reservation trouvee avec la reference %d.\n", nidres);
        return;
    }

    printf("Modifier les informations:\n");

    printf("Entrez le prenom: ");
    scanf(" %[^\n]", res_details[trouve].prenom);

    printf("Entrez le nom: ");
    scanf(" %[^\n]", res_details[trouve].nom);

    printf("Entrez le telephone: ");
    scanf("%s", res_details[trouve].telephone);

    printf("Entrez l'age: ");
    scanf("%d", &res_details[trouve].age);

    while (1) {
                printf("La date (JJ/MM/AAAA) : ");
                scanf("%s", res_details[count].date);
                if (date_valide(res_details[count].date)) {
                    break;
                } else {
                    printf("Date invalide. Veuillez reessayer.\n");
                }
            }

    printf("Entrez le statut (1 - valide, 2 - reporte, 3 - annule, 4 - traite): ");
    scanf("%s", res_details[trouve].statut);

    printf("Reservation modifiee avec succes !\n");
}

void suprimmer(){


     int nidres;
     int trouve = 0;
       printf("\n donner la reference de reservation : ");
       scanf("%d", &nidres);

       for (int i = 0; i < total_reservations; i++) {
        if (res_details[i].id == nidres) { // Use res_details[i].id instead of idres
            // Shift reservations to remove the current one
            for (int j = i; j < total_reservations - 1; j++) {
                strcpy(res_details[j].nom, res_details[j + 1].nom);
                strcpy(res_details[j].prenom, res_details[j + 1].prenom);
                strcpy(res_details[j].telephone, res_details[j + 1].telephone); // Fixed the dot notation
                strcpy(res_details[j].statut, res_details[j + 1].statut); // Fixed the array indexing
                strcpy(res_details[j].date, res_details[j + 1].date); // Fixed the array indexing
                res_details[j].id = res_details[j + 1].id; // Fixed the array indexing
            }
            total_reservations--; // Decrease the total reservations
            printf("\nLa reservation est supprime avec succes!\n");
            trouve = 1;
            break; // Exit the loop after deletion
        }
    }

    if (trouve != 1) {
        printf("\nLa reservation n'est pas supprime!\n");
    }

 }

void rechercher(){

}

void statistique(){}


int main()
{
    int choix;




do{
    printf(" -------------------------------------------------------- \n");
    printf("|              1-RESERVER UN RENDEZ-VOUS.                |\n");
    printf("|              2-MODIFIER LA RESERVATION.                |\n");
    printf("|              3-SUPPRIMER LA RESERVATION.               |\n");
    printf("|              4-AFFICHER LA RESERVATION.                |\n");
    printf("|              5-RECHERCHER LA RESERVATION.              |\n");
    printf("|                   6-STATISTIQUES.                      |\n");
    printf("|                      0-QUITTER.                        |\n");
    printf(" -------------------------------------------------------- \n");
    printf("\n");

    printf("\n\ntaper votre choix:");
    scanf(" %d",&choix);
    switch(choix){
        case 1 :
            ajouter();
        break;

        case 2 :
            modifier();
        break;

        case 3 :
            suprimmer();
        break;


        case 4 :
            afficher(total_reservations);
        break;

        case 5 :
            rechercher();
        break;

        case 6 :
            statistique();
        break;
    }
}while(choix != 0);
    return 0;
}
