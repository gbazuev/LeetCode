#include <string>

class Solution {
public:
    int lengthOfLastWord(std::string s) {
        std::size_t symcount = 0u;

        for (std::int64_t i = s.length() - 1; i >= 0u; --i)  {
            if (s[i] == ' ' && symcount != 0u)   {
                break;
            }

            else if (s[i] == ' ' && symcount == 0u) {
                continue;
            }

            ++symcount;
        }

        return symcount;
    }
};

int main(int argc, const char** const argv) {
  return EXIT_SUCCESS;
}
