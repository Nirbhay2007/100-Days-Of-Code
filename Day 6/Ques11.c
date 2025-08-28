#include <stdio.h>

int main() {
	int num;

	// Input an integer
	printf("Enter an integer: ");
	scanf("%d", &num);

	// Check even or odd using if-else
	if (num % 2 == 0) {
		printf("%d is even.\n", num);
	} else {
		printf("%d is odd.\n", num);
	}

	return 0;
}
