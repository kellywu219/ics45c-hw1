// ------------------------- Tests File - stack_test.cpp -------------------- //
// This file is for writing your own user tests. Be sure to include your *.hpp
// files to be able to access the functions that you wrote for unit testing.
// An example has been provided, but more documentation is available here:
// https://github.com/google/googletest/blob/main/docs/primer.md
// -------------------------------------------------------------------------- //

#include <gtest/gtest.h>
#include <string>

#include <iostream>
// Include all of your *.h files you want to unit test:
#include "letter_count.hpp"

namespace {

TEST(Count, SimpleString) {
  // Push 'c' on the stack, and make sure we get 'c' back.
  std::string ts = "ABCDEF";
  int char_counts[26] = { 0 };
  count(ts, char_counts);
  for (int i = 0; i < 6; ++i) {
    EXPECT_EQ(1, char_counts[i]);
  }
}

// ADD YOUR TESTS HERE:
TEST(Count, Lowercase){
    std::string ts = "abc";
    int char_counts[26] = { 0 };
    count(ts, char_counts);

    EXPECT_EQ(1, char_counts[0]);
    EXPECT_EQ(1, char_counts[1]);
    EXPECT_EQ(1, char_counts[2]);
}

TEST(Count, NonLetters){
    std::string ts = "A1! B?";
    int char_counts[26] = {0};
    count(ts, char_counts);
    
    EXPECT_EQ(1, char_counts[0]);
    EXPECT_EQ(1, char_counts[1]);
}

TEST(Count, Mixed){
      std::string ts = "AaBb";
      int char_counts[26] = {0};
      count(ts, char_counts);
    
      EXPECT_EQ(2, char_counts[0]);
      EXPECT_EQ(2, char_counts[1]);
}
} // anonymous namespace
