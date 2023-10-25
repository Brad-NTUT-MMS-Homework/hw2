#include <stdio.h>

int main() {
	while (1) {
		float sales;
		printf("Enter sales in dollars (-1 to end): ");
		scanf_s("%f", &sales);
		if (sales == -1) {
			break;
		}

		printf("Salary is: $%.2f", 200 + sales * 0.09);
		puts("\n");
	}

	return 0;
}