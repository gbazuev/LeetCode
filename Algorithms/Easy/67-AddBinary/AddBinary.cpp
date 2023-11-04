#include <string>
#include <algorithm>

class Solution {
public:
    string addBinary(std::string a, std::string b) {
        std::string c;

        std::uint8_t carry = 0u;
        std::int32_t apo = a.length() - 1, bpo = b.length() - 1;

        c.reserve(std::max(apo, bpo));

        while (apo >= 0 || bpo >= 0)  {
            const std::uint8_t abit = apo >= 0 ? a[apo--] - 48u : 0u;
            const std::uint8_t bbit = bpo >= 0 ? b[bpo--] - 48u : 0u;

            if (carry)  {
                c.insert(0u, 1u, abit ^ bbit ^ carry + 48u);
                carry = abit | bbit ? 1u : 0u;
                continue;
            }

            c.insert(0u, 1u, abit ^ bbit + 48u);
            carry = abit & bbit ? 1u : 0u;
        }

        if (carry)  {
            c.insert(0u, 1u, 49u);
        }

        return c;
    }
};

int main(int argc, const char** const argv) {
  return EXIT_SUCCESS;
}
