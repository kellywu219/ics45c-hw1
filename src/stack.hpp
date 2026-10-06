#include <iostream>
#include <string>

constexpr int STK_MAX = 1000;

class Stack{
    int _top;
    char buf[STK_MAX

public:
    Stack();
    void push(char c);
    char pop();
    chat top();
    bool isEmpty();
    bool isFull();
};

void push_all(Stack& stk, std::string line);
void pop_all(Stack& stk);