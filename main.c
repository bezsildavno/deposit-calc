
int amount_of_income(int length, int dep_amount) {
	int cashback;

	if ((length > 0) && (length <= 30)) {
	cashback = dep_amount + (dep_amount / 100 * -10);
	}

	if ((length >= 31) && (length <= 120)) {
	if (dep_amount < 100000)
		cashback = dep_amount + (dep_amount / 100 * 2);
	else
		cashback = dep_amount + (dep_amount / 100 * 3);
	}

	if ((length >= 121) && (length <= 240)) {
	if (dep_amount < 100000)
		cashback = dep_amount + (dep_amount / 100 * 6);
	else
		cashback = dep_amount + (dep_amount / 100 * 8);
	}

	if ((length >= 241) && (length <= 365)) {
	if (dep_amount < 100000)
		cashback = dep_amount + (dep_amount / 100 * 12);
	else
		cashback = dep_amount + (dep_amount / 100 * 15);
	}

	return cashback;
}

int data(int length)
{
	if ((length >= 0) && (length <= 365)) return 1;
	else return 0;
}
int money(int dep_amount)
{
	if (dep_amount >= 10000) return 1;
	else return 0;
}

int main() {
int length, dep_amount, n;
printf("enter lenght to deposit: \n");
scanf("%d", &length);
printf("enter dep_amount to deposit: \n");
scanf("%d", &dep_amount);
n = data(length);
if (n==0) printf("Error: Incorrect length. \n");
n=money(dep_amount)
if (n==0) printf("Error: Incorrect dep_amount \n"); 
printf("dep_amount at the end of: ");
printf("%d \n", amount_of_income(length, dep_amount));


return 0;
}
