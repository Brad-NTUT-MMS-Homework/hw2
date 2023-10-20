#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	int accNum, totalCharges, totalCredits, creditLimit;
	float beginningBalence, newBalence;
	printf("Enter account number (-1 to end): ");
		scanf("%d", &accNum);
		
		printf("Enter beginning balence: ");
		scanf("%f", &beginningBalence);

		printf("Enter total charges: ");
		scanf("%d", &totalCharges);

		printf("Enter total credits: ");
		scanf("%d", &totalCredits);

		printf("Enter credit limit: ");
		scanf("%d", &creditLimit);

		newBalence = beginningBalence + totalCharges - totalCredits;


		printf("Account: %d\n", accNum);
		printf("Credit limit: %.2f\n", creditLimit);
		printf("Balence: %.2f\n", beginningBalence);
		if (beginningBalence>newBalence) {
			puts("Credit Limit Excceeded.");
		}


}