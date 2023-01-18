#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(NULL));

	int i, n, max, min;

	printf("Maximum:\n");
	scanf("%d", &max);

	printf("Minimum:\n");
	scanf("%d", &min);

	for(i = 1; i < 11; i++) {

		n = rand() % max;
		
		if (n >= min) {
	
			printf("%d. zufällige Zahl: %d\n", i, n);

		}

		else {

			i--;
		}

	}

	return 0;

}	

