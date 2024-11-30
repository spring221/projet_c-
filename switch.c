#include <stdio.h>
#include <stdlib.h>

int main (int arc , char* argrv[]){

    int choix;

    printf("===Menu====\n\n");

    printf("1. Royal Cheese\n");
    printf("2. Mc Deluxe\n");
    printf("3. Mc Bacon\n");
    printf("4.Big Mac\n");

    printf("Votre choix ?\n");
    scanf("%d",&choix);

    switch(choix){
        case 1:
            printf("tu as choisi le memu Royal cheese\n");
            break;
        case 2:
            printf("tu as choisi le memu Mc Deluxe\n");
            break;
        case 3:
            printf("tu as choisi le memu Mc Bacon\n");
            break;
        case 4:
            printf("tu as choisi le memu Big Mac\n");
            break;
        default:
            printf("se Memu nexite pas !!!\n");
            break;

    }



    return 0 ;
}