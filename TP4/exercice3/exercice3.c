#include<stdio.h>
#include<stdlib.h>

main() {
    char nom[20];
    char prenom[20];
    char sexe;
    printf("Etes vous une femme ou un homme ? F/H\n");
    sexe = _getch(); // Scanf mais pour une seule lettre genre choisir H ou F 
    sexe = toupper(sexe); // idem les deux lignes vont ensemble
    printf("Veuillez saisir votre nom :\n");
    scanf_s("%s", &nom, (unsigned)_countof(nom));
    printf("Veuillez saisir votre prenom :\n");
    scanf_s("%s", &prenom, (unsigned)_countof(prenom));
    if (sexe == 'H') {
        printf("Monsieur %s %s", prenom, nom);
    }
    else {
        printf("Madame %s %s", prenom, nom);
    }
}
