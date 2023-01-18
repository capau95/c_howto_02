#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int i = 1;
int n, max, min;

void zufall(int i) {

	if (i < 11) {

		n = rand() % max;
		
		if (n >= min) {
	
			printf("%d. zufällige Zahl: %d\n", i, n);
			
			zufall(i + 1);

		}

		else {

			zufall(i);	
		}

	}

}

int main() {

	srand(time(NULL));

	printf("Maximum:\n");
	scanf("%d", &max);

	printf("Minimum:\n");
	scanf("%d", &min);

	zufall(i);

	return 0;

}	

