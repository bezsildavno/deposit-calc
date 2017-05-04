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




return 0;
}
