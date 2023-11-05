#include <vector>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        if (nums.size() == 1u) return nums[0u];

        for (std::size_t i = 0u; i < nums.size() - 1u; ++i) {
            nums[i + 1u] = nums[i] ^ nums[i + 1u];
        }

        return nums[nums.size() - 1u];
    }
};

int main(int argc, const char** const argv) {
  return EXIT_SUCCESS;
}
