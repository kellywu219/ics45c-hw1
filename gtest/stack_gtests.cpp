// ------------------------- Tests File - stack_test.cpp -------------------- //
// This file is for writing your own user tests. Be sure to include your *.hpp
// files to be able to access the functions that you wrote for unit testing.
// An example has been provided, but more documentation is available here:
// https://github.com/google/googletest/blob/main/docs/primer.md
// -------------------------------------------------------------------------- //

#include <gtest/gtest.h>
#include <string>

#include <iostream>
using namespace std;
// Include all of your *.hpp files you want to unit test:
#include "stack.hpp"

namespace {

TEST(Stack, PushPopEQ) {
  // Push 'c' on the stack, and make sure we get 'c' back.
  Stack st;
  st.push('c');
  EXPECT_EQ('c', st.pop());
}

TEST(Stack, PushPopNE) {
  // Push 'c' on the stack, make sure we dont get 'd' back.
  Stack st;
  st.push('c');
  EXPECT_NE('d', st.pop());
}

TEST(Stack, Empty) {
  Stack st;
  EXPECT_TRUE(st.isEmpty());
  st.push('c');
  EXPECT_FALSE(st.isEmpty());
  st.pop();
  EXPECT_TRUE(st.isEmpty());
}

TEST(Stack, PushAll) {
  Stack st;
  std::string s = "push";
  push_all(st, s);
  for (int i = 3; i >= 0; --i) {
    EXPECT_EQ(s[i], st.pop());
  }
}

TEST(Stack, PopAll) {
  Stack st;
  std::string s = "push";
  push_all(st, s);
  testing::internal::CaptureStdout();
  pop_all(st);
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_EQ("hsup\n", output);
  EXPECT_TRUE(st.isEmpty());
}

// ADD YOUR TESTS HERE:

TEST(Stack, PopEmpty){
    Stack st;
    EXPECT_EQ('@', st.pop());
}

TEST(Stack, TopEmpty){
    Stack st;
    EXPECT_EQ('@', st.top());
}

TEST(Stack, OneChar){
    Stack st;
    st.push('x');
    EXPECT_EQ('x', st.top());
    EXPECT_EQ('x', st.pop());
    EXPECT_TRUE(st.isEmpty());
}

TEST(Stack, Full){
    Stack st;
    for(int i = 0; i<STK_MAX; ++i){
        st.push('a');
    }
    EXPECT_TRUE(st.isFull);
    st.push('b');
    EXPECT_EQ('a', st.pop());
}

} // anonymous namespace
