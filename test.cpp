#include "pch.h"
#include "ArrayToTest.h"
#include "gtest/gtest.h"

Array<int> a = Array<int>(10);


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(TestSet, TestSet) {
    auto b = a.Set(0, 12);
    EXPECT_TRUE(b); //should be fine
};


TEST(TestSet, TestSetWrongParam) {
    ASSERT_ANY_THROW(a.Set(-1, 12)); //invalid argument
};

TEST(TestSet, TestSetOutofRange) {
    ASSERT_THROW(a.Set(12, 12), std::out_of_range); // 12 is more than sizeof(a)
};

TEST(DISABLE_TestGet, TestGet) {
    a.Set(0, 12);
    EXPECT_EQ(12, a.Get(0)); //should be fine
};

TEST(DISABLE_TestGet, TestGetOutOfRange) {
    ASSERT_THROW(a.Get(12), std::out_of_range); // 12 is more than sizeof(a)
};

TEST(TestGet, TestGetWrongparam) {
    ASSERT_THROW(a.Get(7.5), std::invalid_argument);
};

TEST(DISABLE_TestCopy, TestCopy) {
    ASSERT_ANY_THROW(auto c = a);
};

TEST(DISABLE_TestDelete, TestDelete) {
    ASSERT_ANY_THROW(delete &a);
};

TEST(DISABLE_TestDelete, TestDeleteB) {
    Array<int> b = a;
    ASSERT_ANY_THROW(delete &b);
};