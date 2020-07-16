#include "gtest/gtest.h"
#include "falgo.h"

long long factorials[] = {
        1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800,
        479001600, 6227020800, 87178291200, 1307674368000, 20922789888000,
        355687428096000, 6402373705728000, 121645100408832000, 2432902008176640000
};

TEST(FactorialTest, PrimeSwingValuesChecking) {
    for (long long i = 0; i < sizeof(factorials)/sizeof(*factorials); i++) {
        EXPECT_EQ(factorials[i], falgo::PrimeSwing::Count(i));
    }
}

TEST(FactorialTest, SimpleRecursionValuesChecking) {
    for (long long i = 0; i < sizeof(factorials)/sizeof(*factorials); i++) {
        EXPECT_EQ(factorials[i], falgo::SimpleRecursion::Count(i));
    }
}
