#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        int begin = 0, end = numbers.size() - 1;
        while (true)    {
            const int sum = numbers[begin] + numbers[end];

            if (sum > target)   {
                end--;
            }
            else if (sum < target)  {
                begin++;
            }
            else {
                return {begin + 1, end + 1};
            }
        }
        return {};
    }
};

int main(int argc, const char** argv)
{
  Solution solution;
  std::cout<<solution.twoSum( {2, 4, 8, 10, 12}, 6)<<std::endl;
  std::cout<<solution.twoSum( {4, 5, 9, 10, 14, 18, 22}, 24)<<std::endl;
  std::cout<<solution.twoSum( {12, 14, 17, 19, 20, 21, 23, 24}, 39)<<std::endl;
  return EXIT_SUCCESS;
}
