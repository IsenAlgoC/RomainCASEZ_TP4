#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

main() {
	char mot[20];
	int taille;
	bool pareil = true;
	printf("Ecrivez un mot :");
	scanf_s("%s", &mot, (unsigned)_countof(mot));
	taille = strlen(mot);
	for (int i = 1; i <= (int)(taille / 2); i++) {
		if (mot[i - 1] != mot[taille - i]) {
			pareil = false;
		}
	}
	if (pareil == true) {
		printf("Ce mot est un palindrome");
	}
	else {
		printf("Ce mot n est pas un palindrome");
	}
}


