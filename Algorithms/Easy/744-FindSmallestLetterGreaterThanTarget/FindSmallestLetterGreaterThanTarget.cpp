#include <iostream>
#include <vector>

class Solution {
public:
    char nextGreatestLetter(std::vector<char>& letters, char target) {
        size_t begin = 0, end = letters.size() - 1;

        if (letters.at(end) <= target || letters.at(0) > target)    {
            return letters.at(0);
        }

        while (begin + 1 < end)    {
            const size_t mid = begin + (end - begin) / 2;
            if (letters.at(mid) <= target)   {
                begin = mid;
            }
            else {
                end = mid;
            }
        }

        return letters.at(end);
    }
};

int main(int argc, const char** argv)
{
	Solution solution;
	std::cout<<solution.nextGreatestLetter({'a', 'b', 'c', 'd', 'e'}, 'c')<<std::endl;
	std::cout<<solution.nextGreatestLetter({'o', 'p', 'q', 'r', 's'}, 'a')<<std::endl;
	std::cout<<solution.nextGreatestLetter({'e', 'f', 'g'}, 'q')<<std::endl;
	return EXIT_SUCCESS;
}