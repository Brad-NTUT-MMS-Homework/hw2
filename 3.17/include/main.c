#include <stdio.h>

int main() {


	while (1) {
		int accountNum;
		float beginBalance, totalCharges, totalCredits, creditLimit;

		printf("Enter account number (-1 to end): ");
		scanf_s("%d", &accountNum);
		if (accountNum == -1) {
			break;
		}

		printf("Enter beginning balance: ");
		scanf_s("%f", &beginBalance);

		printf("Enter total charges: ");
		scanf_s("%f", &totalCharges);

		printf("Enter total credits: ");
		scanf_s("%f", &totalCredits);

		printf("Enter credit limit: ");
		scanf_s("%f", &creditLimit);

	

		float newBalence = beginBalance + totalCharges - totalCredits;
		if (newBalence > creditLimit) {
			printf("Account:      %d\n", accountNum);
			printf("Credit limit: %.2f\n", creditLimit);
			printf("Balence:      %.2f\n", newBalence);
			puts("Credit Limit Excceeded.");
		}
		puts("");
	}

	return 0;
}