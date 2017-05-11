#include <stdio.h>
#include "deposit.h"

int main() {
	int length, dep_amount, n;
	printf("enter lenght to deposit: \n");
	scanf("%d", &length);
	printf("enter dep_amount to deposit: \n");
	scanf("%d", &dep_amount);
	n = data(length);
	if (n==0) 
		printf("Error: Incorrect length. \n");
	n=money(dep_amount);
	if (n==0) 
		printf("Error: Incorrect dep_amount \n"); 
	printf("dep_amount at the end of: ");
	printf("%d \n", amount_of_income(length, dep_amount));
	printf("net profit: %d \n", amount_of_income(length, dep_amount)-dep_amount);
	return 0;
}
