#include <vector>

class Solution {
public:
    vector<int> plusOne(std::vector<int>& digits) {
        digits[digits.size() - 1u] += 1;

        for (std::uint8_t i = digits.size() - 1u; i >= 0u; --i)  {
            if (digits[i] > 9)  {
                if (i == 0u)    {
                    digits.insert(digits.begin(), 1);
                    digits[1u] -= 10;
                    break;
                }

                digits[i - 1u] += 1;
                digits[i] -= 10;
            }

            else break;
        }

        return digits;
    }
};

int main(int argc, const char** const argv) {
  return EXIT_SUCCESS;
}
