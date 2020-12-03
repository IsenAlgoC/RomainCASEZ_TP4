#include <stdlib.h>
#include <stdio.h>
#include <time.h>    

int main() {
    int MAX = 20;
    int MIN = 0;
    int tab[100];
    int p = 0;
    int i = 0;
    int l = 0;
    int y = 0;
    int* MyPtr1 = &tab[0];
    int nbre = 0;

    for (i = 0; i < 100; i++) {
        tab[i] = (rand() % (MAX - MIN + 1)) + MIN;
    }


    for (l = 0; l < 100; l = l + 10) {
        printf("| %d | %d | %d | %d | %d | %d | %d | %d | %d | %d |\n", tab[l], tab[l + 1], tab[l + 2], tab[l + 3], tab[l + 4], tab[l + 5], tab[l + 6], tab[l + 7], tab[l + 8], tab[l + 9]);
    }

    printf("\n\nEntrer la valeur recherchee : ");
    scanf_s("%d", &nbre);
    printf("\n\n");

    for (y = 0; y < 100; ++y, MyPtr1++) {

        if ((*MyPtr1 == nbre) & (p != 0)) {
            printf(", puis en %d", y);
        }
        if ((*MyPtr1 == nbre) & (p == 0)) {
            printf("La valeur %d a ete trouve en %d", nbre, y);
            p++;

        }


    }
    printf(".\n\n");

}