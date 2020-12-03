#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include<locale.h>

int main() {

    char mot[1024];
    int taille = 0;
    int nombremot = 1;
    float moyenne = 0;
    printf("veuillez saisir votre phrase :\n");
    gets_s(mot, 1023);
    taille = strlen(mot);

    for (int i = 0; i < 1024; i++) {

        if (mot[i] == ' ') {
            nombremot++;
            taille--;
        }

    }

    moyenne = taille / nombremot;


    printf("Il y a %d mots !\n\n", nombremot);
    printf("Il y %d caracteres ! \n\n", taille);
    printf("La longueur moyenne des mots est de : %.f lettres !\n", moyenne);

}