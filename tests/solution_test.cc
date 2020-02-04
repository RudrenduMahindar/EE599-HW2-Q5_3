#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(LowerTest, HandlesUpperCaseStringInput) {
  Solution solution;
  string s="TEST";
  solution.StringLower(s);
  string actual=s; 
  string expected="test";
  EXPECT_EQ(expected, actual);
}

TEST(LowerTest, HandlesNumberStringInput) {
  Solution solution;
  string s="599";
  solution.StringLower(s);
  string actual=s; 
  string expected="599";
  EXPECT_EQ(expected, actual);
}

TEST(LowerTest, HandlesEmptyStringInput) {
  Solution solution;
  string s="";
  solution.StringLower(s);
  string actual=s; 
  string expected="";
  EXPECT_EQ(expected, actual);
}


TEST(LowerTest, HandlesLowerCaseStringInput) {
  Solution solution;
  string s="abcd";
  solution.StringLower(s);
  string actual=s; 
  string expected="abcd";
  EXPECT_EQ(expected, actual);
}