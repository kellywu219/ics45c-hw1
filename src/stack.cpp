#include "stack.hpp"
#include <stack>

using namesapce std;

int main(){
    Stack stk;
    string line;
    while(getline(cin, line)){
        push_all(stk, line);
        pop_all(stk);
    }
    return 0;
}