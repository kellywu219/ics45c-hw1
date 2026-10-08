#include <iostream>
#include <string>

constexpr int STK_MAX = 1000;

class Stack{
    int _top;
    char buf[STK_MAX];

public:
    Stack(){
        _top = 0;
    }
    void push(char c){
        if(!isFull()){
            buf[_top]=c;
            _top++;
        }
    }

    char pop(){
        if(!isEmpty()){
            _top--;
            return buf[_top];
        } else {
            return '@';
        }
    }

    char top(){
        if(!isEmpty()){
            return buf[_top-1];
        } else {
            return '@';
        }
    }

    bool isEmpty(){
        return _top==0;
    }
    bool isFull(){
        return _top==STK_MAX;
    }
};

void push_all(Stack& stk, std::string line){
    for (char c: line){
        stk.push(c);
    }
}
void pop_all(Stack& stk){
    while(!stk.isEmpty()){
        std::cout<<stk.pop();
    }
    std::cout << std::endl;
}