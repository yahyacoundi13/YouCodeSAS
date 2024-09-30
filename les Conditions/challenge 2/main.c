#include <stdio.h>

int main() {
      char c;
      printf("taper un character:");
      scanf("%c",&c);
      switch(c){
          case 'a' :
              printf("ce character est un voyelle.");
          break;

           case 'e' :
              printf("ce character est un voyelle.");
          break;

           case 'i' :
              printf("ce character est un voyelle.");
           break;

           case 'o' :
           printf("ce character est un voyelle.");
          break;

           case 'u' :
            printf("ce character est un voyelle.");
          break;

           case 'y' :
              printf("ce character est un voyelle.");
          break;
          default:
          printf("ce charcter est non voyelle.");
          break;

      }
    return 0;
}
