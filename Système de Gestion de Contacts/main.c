#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100

typedef struct {
     char nom[50];
     char num_tele[50];
     char email[50];

}contacts;
contacts contact[max]= {/*
    {"yahaya","0705473654","yahyacoundi@gmail.com"},
    {"mazine","0707885233","mazinezougui@gmail.com"},
    {"youssra","0657463534","youssrayoucode@gmail.com"},*/
};
int ncontact = 0;
void ajoute(){
    int C;
    int nc;
    int i;
    if(ncontact < max){
        printf("saisie 1 pour ajouter un seul contact \ saisie 0 un ajouter des multiple contacts : ");
        scanf("%d",&C);
        if (C==1){
            printf("entrez le nom de contact :");
        scanf("%s",contact[ncontact].nom);

        printf("entrez le telephone de contact :");
        scanf("%s",contact[ncontact].num_tele);

        printf("entrez le email de contact :");
        scanf("%s",contact[ncontact].email);
        ncontact++;
        }else if ( C == 0){
            printf("entrer le nombre du contact a ajouter : ");
            scanf("%d",&nc);
            for(i=1;i<=nc;i++){
                    printf("entrez le nom de contact :");
                    scanf("%s",contact[ncontact].nom);

                    printf("entrez le telephone de contact :");
                    scanf("%s",contact[ncontact].num_tele);

                    printf("entrez le email de contact :");
                    scanf("%s",contact[ncontact].email);
                    ncontact++;

            }
        }


    }
    else printf("BOOM!!! la liste des contacts est pleine\n");
}
int i;
void affichage(){

    if(ncontact == 0) printf("BAAAAA7 , pas de contact pour le moment.");
    else{
        for(i = 0;i<ncontact;i++){
            printf("le nom :%s\n",contact[i].nom);
            printf("le numero :%s\n",contact[i].num_tele);
            printf("l'email :%s\n",contact[i].email);
            printf("__________________________\n");

        }
    }
}
void recherche(){
    char nom[50];
    int trouve = 0;
    printf("saisie le nom du contact rechercher :");
    scanf("%s",&nom);
    for(i = 0;i<ncontact;i++){
        if(strcmp(nom,contact[i].nom)== 0){
            printf("le numero :%s\n",contact[i].num_tele);
            printf("l'email :%s\n",contact[i].email);
            trouve = 1;
            break;
        }
    }
if(!trouve){
            printf("ce contact est invalide .\n");
        }

}
void supprimer(){
    char nom[50];
    int SUP;
    printf("Entrez le nom du contact a supprimer: ");
    scanf("%s", nom);
    for (int i = 0; i < ncontact; i++) {
        if (strcmp(contact[i].nom, nom) == 0) {
            printf("Tapez 1 pour confirmer la supression ou 0 pour le annuler:\n");
            scanf("%d",&SUP);
            if (SUP == 1){
                for (int j = i; j < ncontact - 1; j++) {
                contact[j] = contact[j + 1];
                }
                ncontact--;
                printf("Contact supprime.\n");
                return;
            }
            else if (SUP == 0){
                printf("Contact non supprime l'operation annuler.\n");
            }
            else{
            printf("Contact non trouve.\n");
        }

        }

    }
}
void modifier() {
    int CONF;
    char nom[50];
    printf("Entrez le nom du contact à modifier: ");
    scanf("%s", nom);
    for (int i = 0; i < ncontact; i++) {
        if (strcmp(contact[i].nom, nom) == 0) {
            printf("Tapez 1 pour confirmer ou 0 pour annuller :\n");
            scanf("%d",&CONF);
            if (CONF == 1){
                printf("Nouveau numéro de téléphone: ");
                scanf("%s", contact[i].num_tele);
                printf("Nouvelle adresse e-mail: ");
                scanf("%s", contact[i].email);
                }
            else if(CONF == 0){
                printf("La modification Annuller \n");
            }
            return;
        }
    }
    printf("Contact non trouvé.\n");
}



int main()
{

    int choix;

    do{


    printf(" -------------------------------------------------- \n");
    printf("|~~~~~~~~~~~~~~~ CONTACT ~~~~ APP ~~~~~~~~~~~~~~~~~|\n");
    printf("|~~~~~~~~~~~~ 1- Ajouter un Contact    ~~~~~~~~~~~~|\n");
    printf("|~~~~~~~~~~~~ 2- Modifier un Contact   ~~~~~~~~~~~~|\n");
    printf("|~~~~~~~~~~~~ 3- Suprimmer un Contact  ~~~~~~~~~~~~|\n");
    printf("|~~~~~~~~~~~~ 4- Affcher un Contact   ~~~~~~~~~~~~|\n");
    printf("|~~~~~~~~~~~~ 5- Rechercher un Contact ~~~~~~~~~~~~|\n");
    printf("|~~~~~~~~~~~~ 0- Quitter un Contact    ~~~~~~~~~~~~|\n");
    printf(" -------------------------------------------------- \n");
    printf("\n");
    printf("valide votre choix : ");
    scanf("%d",&choix);
    printf("\n");


        switch(choix){
        case 1 :
            ajoute();
            break;

        case 2 :
            modifier();
            break;


        case 3 :
            supprimer();
            break;

        case 4 :
            affichage();
            break;

        case 5 :
            recherche();
            break;

        default:
        if(choix != 0){
            printf("choix invalide");
        }

            }

    }while(choix != 0);

    return 0;
}
