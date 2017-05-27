#include <ctest.h>
#include "../src/deposit.h"

CTEST(checkdata, test_day199_sum39999)
{
    // When
    int result = checkdata (39999,199);

    // Then
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

////*********************************////

CTEST(checkdata,test_day1_9999sum)
{
    
    // When
    int result = checkdata (1,9999);

    // Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(checkdata,test_negday_sum10001)
{
	// When
    int result = checkdata (-1,10001);

	// Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(checkdata,test_days366_sum10001)
{
	// When
    int result = checkdata (366,10001);

	// Then
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(amount_of_income,test_day1_sum10000)
{	
	// When
    int result = amount_of_income (1,10000);

    // Then
    int expected = 9000;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(amount_of_income,test_sum10000days30)
{
	// When
    int result = amount_of_income (30,10000);

    // Then
    int expected = 9000;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(amount_of_income, test_30days_sum100000)
{
	// When
    int result = amount_of_income (30,100000);

    // Then
    int expected = 90000;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(amount_of_income, test_31days_sum10000)
{
	// When
    int result = amount_of_income (31,10000);

    // Then
    int expected = 10200;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(amount_of_income, test_241days_sum10000)
{
	// When
    int result = amount_of_income (241,10000);

    // Then
    int expected = 11200;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(amount_of_income, test_241days_sum100000)
{
	// When
    int result = amount_of_income (241,100000);

    // Then
    int expected = 115000;
    ASSERT_EQUAL(expected, result);
}
////*********************************////
CTEST(amount_of_income, test_365days_sum110000)
{
	// When
    int result = amount_of_income (365,110000);

    // Then
    int expected = 126500;
    ASSERT_EQUAL(expected, result);
}
