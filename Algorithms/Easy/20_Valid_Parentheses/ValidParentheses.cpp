#include <iostream>
#include <stack>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> stack;
        for (const char sym : s) {
            if (sym == '(' || sym == '[' || sym == '{') {
                stack.push(sym);
            }
            else if (!stack.empty())    {
            const char top = stack.top();

            if ((top == '(' && sym == ')') || 
            (top == '{' && sym == '}') || 
            (top == '[' && sym == ']')) {
                stack.pop();
            }  else  {
                return false;
            }
            }
            else    {
                return false;
            }
        }
        return stack.empty();
}
};

int main(int argc, char** argv) 
{
    Solution solution;
    std::cout<<solution.isValid("()")<<std::endl;
    std::cout<<solution.isValid("]{[]}")<<std::endl;
    std::cout<<solution.isValid("()[]{}");
    return EXIT_SUCCESS;
}
