#include <stdio.h>

int main() {
	while (1) {
		int hours;
		float hourlyRate;

		printf("Enter # of hours worked (-1 to end): ");
		scanf_s("%d", &hours);
		if (hours == -1) {
			break;
		}

		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &hourlyRate);

		printf("Salary is: $%.2f", hours > 40 ? 
			(hours - 40) * 1.5 * hourlyRate + 40 * hourlyRate : hours * hourlyRate);
		puts("\n");
	}

	return 0;
}