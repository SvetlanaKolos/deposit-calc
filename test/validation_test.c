#include <stdlib.h>
#include "deposit.h"
#include "ctest.h"

CTEST(CheckSrok, GoodTest1)
{
    int expected1 = 0;
    int expected2 = 365;
    int result = rand() %365;
    ASSERT_INTERVAL(expected1,expected2,result);
}

CTEST(CheckSumm, GoodTest2)
{
    int expected1 = 10;
    int expected2 = 1000000;
    int result = rand() %100000;
    ASSERT_INTERVAL(expected1,expected2,result);
}
