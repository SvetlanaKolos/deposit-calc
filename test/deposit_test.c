#include <deposit.h>
#include "ctest.h"

CTEST(FirstSrok0_30, SummLess100k1)
{
    int a = 100;
    int b = 1;
    int expected = a*0.9 ;
    int result = FirstSrok0_30(b,a);
    ASSERT_EQUAL(expected, result);
}

CTEST(SecondSrok31_120, SummLess100k2)
{
    int a = 50;
    int b = 1;
    int expected = a + a*0.02;
    int result = SecondSrok31_120(b,a);
    ASSERT_EQUAL(expected, result);
}

CTEST(ThirdSrok121_240, SummLess100k3)
{
    int a = 50;
    int b = 1;
    int expected = a + a*0.06;
    int result = ThirdSrok121_240(b,a);
    ASSERT_EQUAL(expected, result);
}

CTEST(FourthSrok241_365, SummLess100k4)
{
    int a = 50;
    int b = 1;
    int expected = a + a*0.12;
    int result = FourthSrok241_365(b,a);
    ASSERT_EQUAL(expected, result);
}

CTEST(FirstSrok0_30, SummMore100k5)
{
    int a = 100;
    int b = 1;
    int expected = a*0.9 ;
    int result = FirstSrok0_30(b,a);
    ASSERT_EQUAL(expected, result);
}


CTEST(SecondSrok31_120q, SummMore100k6)
{
    int a = 150;
    int b = 2;
    int expected = a + a*0.03;
    int result = SecondSrok31_120(b,a);
    ASSERT_EQUAL(expected, result);
}

CTEST(ThirdSrok121_240q, SummMore100k7)
{
    int a = 150;
    int b = 2;
    int expected = a + a*0.08;
    int result = ThirdSrok121_240(b,a);
    ASSERT_EQUAL(expected, result);
}

CTEST(FourthSrok241_365q, SummMore100k8)
{
    int a = 150;
    int b = 2;
    int expected = a + a*0.15;
    int result = FourthSrok241_365(b,a);
    ASSERT_EQUAL(expected, result);
}
