#include "../Example.h"
#include <gtest/gtest.h>


struct ExampleTests 
    : public ::testing::Test {

        int* x;

        int GetX() {
            return *x;
        }

        virtual void SetUp() override {
            x = new int(42);
        }

        virtual void TearDown() override {
            delete x;
        }
};

TEST_F(ExampleTests, MAC) {
    int y=16;
    int sum = 100;
    int oldSum = sum;
    EXPECT_EQ(
        oldSum + GetX() * y,
        MAC(GetX(),y, sum)

    );
    EXPECT_EQ(
        oldSum + GetX() * y,
        sum
    );
}

TEST(ExampleTests2, Square) {
    int x = 5;
    int expectedSquare = x*x;
    EXPECT_EQ(
        expectedSquare,
        Square(x)
    );

}