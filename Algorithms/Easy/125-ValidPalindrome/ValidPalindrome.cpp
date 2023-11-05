#include <string>

class Solution {
public:
    bool isPalindrome(std::string s) {
        std::int32_t i = -1, j = s.length();

        while (++i <= --j)   {
            if (!isalpha(s[i]) && !isdigit(s[i])) {
                ++j;
                continue;
            } 

            if (!isalpha(s[j]) && !isdigit(s[j])) {
                --i;
                continue;
            }

            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }
        }

        return true;
    }
};

int main(int argc, const char** const argv) {
    return EXIT_SUCCESS;
}
