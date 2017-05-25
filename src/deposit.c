#include "deposit.h"

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

int checkdata(int lenght, int dep_amount){
    if ((lenght <= 0) || (lenght > 365) || (dep_amount < 10000))
        return 0;
else return 1;
}
