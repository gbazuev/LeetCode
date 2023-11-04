#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        std::size_t begin = 0u, end = nums.size() - 1;
        std::uint32_t mid = -1;

        if (target > nums[nums.size() - 1u]) return nums.size();
        if (target <= nums[0u]) return 0u;

        while (begin <= end)   {
            mid = (begin + end) / 2u;

            if (nums[mid] > target) {
                end = mid - 1u;
            }

            else if (nums[mid] < target)    {
                begin = mid + 1u;
            }

            else return mid;
        }

        return nums[mid] < target ? mid + 1u : mid;
    }
};

int main(int argc, const char** const argv) {
  return EXIT_SUCCESS;
}
