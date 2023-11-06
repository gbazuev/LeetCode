#include <vector>
#include <unordered_map>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_map<std::int32_t, std::uint8_t> freqmap;

        for (const std::int32_t& num : nums) {
            if (++freqmap[num] >= 2u) {
                return true;
            }
        } 

        return false; 
    }
};

int main(int argc, const char** const argv) {
  return EXIT_SUCCESS:
}
