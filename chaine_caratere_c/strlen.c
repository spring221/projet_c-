/*
By TNS Software software engineer
ULaval
 */

#include <stdio.h>
#include <stdlib.h>
#include "strlen.h"

int main (int arc , char* argrv[]){

    char* Nom ;

    printf("/* \n By TNS \n Software software engineer \n ULaval */ \n");

    printf("entrez unr chaine de caratere \n");

    scanf("%s\n",Nom);

    printf("%s",Nom);
    
    printf("%d\n",Strlen(Nom));

    return 0 ;
}

int Strlen(char* chaine){

    int nbre_elt = 0 ;

    char debut = 0 ;

    do{
         
         debut = chaine[nbre_elt] ;
         nbre_elt += 1 ;

    }while(debut != '\0');

    return nbre_elt ;
}