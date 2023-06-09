#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, size_t> map;
        for (size_t index = 0u; index < nums.size(); index++)   {
            const auto& elem = map.find(target - nums.at(index));
            if (elem == map.end())    {
                map.insert( {nums.at(index), index} );
                continue;
            }
            return { static_cast<int>(elem->second), static_cast<int>(index) };
        }
        return {};
    }
};

int main(int argc, const char** argv) {
  Solution solution;
  
  std::vector<int> firstTest = solution.twoSum( {1, 2, 3, 4, 5}, 8);
  std::cout<<firstTest[0]<<", "<<firstTest[1]<<std::endl;
  
  std::vector<int> secondTest = solution.twoSum( {2, 4, 5, 9, 12, 45}, 16);
  std::cout<<secondTest[0]<<", "<<secondTest[1]<<std::endl;
  
  std::vector<int> thirdTest = solution.twoSum( { 3, 1, 2, 5, 4, 8, 7}, 15);
  std::cout<<thirdTest[0]<<", "<<thirdTest[1]<<std::endl;

  return EXIT_SUCCESS;
}
