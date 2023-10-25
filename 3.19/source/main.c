#include <stdio.h>

int main() {
	while (1) {
		float principal, interestRate;
		int days;

		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &principal);
		if (principal == -1) {
			break;
		}
		
		printf("Enter interest rate: ");
		scanf_s("%f", &interestRate);
		
		printf("Enter term of the loan in days: ");
		scanf_s("%d", &days);


		printf("The interest charge is: $%.2f", principal * interestRate * days / 365);
		puts("\n");
	}

	return 0;
}