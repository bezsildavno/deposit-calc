#include <stdio.h>
#include "deposit.h"

int main() {
	int length, dep_amount;
	printf("enter lenght to deposit: \n");
	scanf("%d", &length);
	printf("enter dep_amount to deposit: \n");
	scanf("%d", &dep_amount);
	if (checkdata(length, dep_amount)==0)
       		printf("Error, please enter correct data! \n");
	else
	{
		printf("dep_amount at the end of: ");
		printf("%d \n", amount_of_income(length, dep_amount));
		printf("net profit: %d \n", amount_of_income(length, dep_amount)-dep_amount);
	}
	return 0;
}
