#include <stdio.h>
#include <math.h>

void calInterest(int principal, float rate);

int main(void)
{
	float principal;
	printf("Enter your principal: ");
	scanf_s("%f", &principal);

	calInterest(principal, 10.0);
	calInterest(principal, 10.5);
	calInterest(principal, 11.0);
	calInterest(principal, 11.5);
	calInterest(principal, 12.0);

	return 0;
}

void calInterest(int principal, float rate) {
	printf("rate: %.1f %%\n", rate);
	rate /= 100;
	printf("%4s%23s", "Year", "Amount on deposit\n");
	for (unsigned int year = 1; year <= 15; year++)
	{
		printf("%4u%21.2f\n", \
			year, principal * pow(1.0 + rate, year));
	}

}