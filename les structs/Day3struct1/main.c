#include <stdio.h>
#include <stdlib.h>
struct personne{
   char nom[50];
   char prenom[50];
   int age;

};
int main()
{
   struct personne p1 = {"yahya","coundi",21};
   struct personne p2 = {"amina","louf",21};

   printf("%s --- %s --- %d \n",p1.nom,p1.prenom,p1.age);
   printf("%s --- %s --- %d \n",p1.nom,p2.prenom,p1.age);

   return 0;
}
