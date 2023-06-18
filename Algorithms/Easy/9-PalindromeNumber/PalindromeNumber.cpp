#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)  return false;

        const uint64_t number = x;
        uint64_t reversed = 0;
        while (x != 0)    {
            reversed = reversed * 10  + x % 10;
            x /= 10;
        }

        return reversed == number;
    }
};

int main(int argc, const char** argv)	{
	Solution solution;

	std::cout<<solution.isPalindrome(121)<<std::endl;
	std::cout<<solution.isPalindrome(-87878)<<std::endl;
	std::cout<<solution.isPalindrome(12321)<<std::endl;
	std::cout<<solution.isPalindrome(10)<<std::endl;

	return EXIT_SUCCESS;
}
