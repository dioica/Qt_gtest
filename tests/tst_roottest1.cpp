
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

extern "C" {
#include "myfunc.h"
}

using namespace testing;

TEST(rootTest, rootTest1)
{
    EXPECT_EQ(1, 1);
    ASSERT_THAT(0, Eq(0));
}

// 1
TEST(rootTest, positive_d)
{
    double a, b, c, x1, x2;
    double x1_answ, x2_answ;
    x1_answ = 1;
    x2_answ = 2;
    
    a = 1;
    b = -3;
    c = 2;
    rootSearch(a, b, c, &x1, &x2);

    int count_roots = 2;
    ASSERT_EQ(rootSearch(a, b, c, &x1, &x2), count_roots);
    
    ASSERT_EQ(x1, x1_answ);
    ASSERT_EQ(x2, x2_answ);
}

// 2
TEST(rootTest, zero_d)
{
    double a, b, c, x1, x2;
    double x1_answ, x2_answ;
    x1_answ = 0.25;
    x2_answ = 0.25;
    
    a = 16;
    b = -8;
    c = 1;
    rootSearch(a, b, c, &x1, &x2);

    int count_roots = 1;
    ASSERT_EQ(rootSearch(a, b, c, &x1, &x2), count_roots);

    ASSERT_EQ(x1, x1_answ);
    ASSERT_EQ(x2, x2_answ);
}

// 3
TEST(rootTest, negative_d)
{
    double a, b, c, x1, x2;
    double x1_answ, x2_answ;
    int count_roots = 0;

    a = 3;
    b = 1;
    c = 2;
    rootSearch(a, b, c, &x1, &x2);

    
    ASSERT_EQ(rootSearch(a, b, c, &x1, &x2), count_roots);
}

// 4


// 5


// 6


// 7


// 8


// 9
TEST(rootTest, zero_a)
{
    double a, b, c, x1, x2;
    double x1_answ, x2_answ;
    x1_answ = -5;
    x2_answ = -5;


    a = 0;
    b = 10;
    c = 50;
    rootSearch(a, b, c, &x1, &x2);

    int count_roots = 1;
    ASSERT_EQ(rootSearch(a, b, c, &x1, &x2), count_roots);
    
    ASSERT_EQ(x1, x1_answ);
    ASSERT_EQ(x2, x2_answ);
}



// 12
TEST(rootTest, zero_a_b1)
{
    double a, b, c, x1, x2;
    double x1_answ, x2_answ;

    a = 0;
    b = 0;
    c = 50;
    rootSearch(a, b, c, &x1, &x2);

    int count_roots = 0;
    ASSERT_EQ(rootSearch(a, b, c, &x1, &x2), count_roots);

}

// 13


// 14
TEST(rootTest, zero_a_b_c)
{
    double a, b, c, x1, x2;
    double x1_answ, x2_answ;

    a = 0;
    b = 0;
    c = 0;
    rootSearch(a, b, c, &x1, &x2);

    int count_roots = 1;
    ASSERT_EQ(rootSearch(a, b, c, &x1, &x2), count_roots);
}

// 15


// 16

