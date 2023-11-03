#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
      std::size_t i = 1u;
      
      for (std::size_t j = 1u; j < nums.size(); ++j) {
          if (nums[j - 1u] != nums[j]) {
              nums[i++] = nums[j];
          }
      }

      return i;
    }
};

int main(int argc, const char** const argv) {
    return EXIT_SUCCESS;
}
