#include<stdio.h>
#include<stdlib.h>
#define SEPARATEUR '/'
#define TAILLETAB1 20

main() {
	int* MyPtr1;
	int MyTab1[TAILLETAB1];
	MyPtr1 = &MyTab1[20];
	for (int a = 0; a < TAILLETAB1; a++) {
		MyTab1[a] = a + 1;
		printf("%d %c", MyTab1[a], SEPARATEUR);
	}
	printf("\n \n");

	for (int b = 0; b < 20; b++) {
		MyPtr1--;
		printf("%d %c", *MyPtr1, SEPARATEUR);
	}

}
