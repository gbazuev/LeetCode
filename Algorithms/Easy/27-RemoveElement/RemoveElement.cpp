#include <vector>
#include <sys/types.h>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
    if (nums.empty())   {
        return 0u;
    }

    ssize_t left = -1, right = nums.size() - 1u;

      while (left != right) {
            if (nums[left + 1] == val && nums[right] != val)  {
                nums[(left++ + 1)] = nums[right];
                nums[right--] = val;
            }

            else if (nums[left + 1] == val && nums[right] == val) {
                --right;
            }

            else {
                ++left;
            }
        }

        return left + 1u;
    }
};

int main(int argc, const char** const argv) {
    return EXIT_SUCCESS;
}
