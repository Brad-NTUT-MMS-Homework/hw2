#include <stdio.h>

int main(void) {
	int code;
	float workHour, salary;
	printf("Calculator for weekly pay\n\
please input your pay code!\n\
For Managers, your code is 1, \
hourly workers: 2,\n\
commission workers: 3, \
pieceworkers: 4\n\
input your code below: ");
	scanf_s("%d", &code);


	switch (code)
	{
	case 1: // Managers
		puts("Your salary will be $250");
		break;
	case 2: // hourlyWorkwer
		printf("Input your working hour, please: ");
		scanf_s("%f", &workHour);
		salary = workHour > 40 ? 250 + (workHour - 40)*1.5 : 250;
		printf("Your salary will be %.2f", salary);
		break;
	case 3: // commissionWorker 
		printf("Input your weekly sales: ");
		int wkSales = 0;
		scanf_s("%d", &wkSales);
		salary = 250 + (float)wkSales * 1.057;
		printf("Your salary will be %.2f", salary);
		break;
	case 4: // pieceWorker
		printf("Input the amount of items you made and its price: ");
		int items = 0;
		float price = 0;
		scanf_s("%d %f", &items, &price);
		salary = (float)items * price;
		printf("Your salary will be %.2f", salary);
		break;
	default:
		puts("Uhh... you may input the wrong code?");
		break;
	}
	return 0;

}