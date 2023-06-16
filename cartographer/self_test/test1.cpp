#include <iostream>
#include <string>
#include <vector>

#include "gtest/gtest.h"

// 测试 GTEST的demo示例 ========================================
// GTEST使用URL： https://zhuanlan.zhihu.com/p/369466622
int Factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}
// 正数为一组
TEST(FactorialTest, Negative) {
  EXPECT_EQ(1, Factorial(-5));
  EXPECT_EQ(1, Factorial(-1));
  EXPECT_GT(Factorial(-10), 0);
}
// 0
TEST(FactorialTest, Zero) { EXPECT_EQ(1, Factorial(0)); }
// 负数为一组
TEST(FactorialTest, Positive) {
  EXPECT_EQ(1, Factorial(1));
  EXPECT_EQ(2, Factorial(2));
  EXPECT_EQ(6, Factorial(3));
  EXPECT_EQ(40320, Factorial(8));
}
// 测试 GTEST的demo示例 ========================================

int test_shared_ptr() { return 0; }

int add(int x1, int x2) { return x1 + x2; }

int main(int argc, char** argv) {
  printf("Running main() from %s\n", __FILE__);

  testing::InitGoogleTest(&argc, argv);

  EXPECT_EQ(add(1, 1), 1) << "PASS";
  EXPECT_EQ(add(1, 1), 2) << "FAILED: EXPECT: 2, but given 1";

  std::cout << "Hello World !" << std::endl;
  return RUN_ALL_TESTS();
  // return 0;
}
