#include <string>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        if (haystack.length() < needle.length()) {
            return -1;
        }
 
        int index = -1, fsapp = -1;
        std::size_t i = 0u;

        for (std::size_t j = 0u; j < haystack.length() && i != needle.length(); ++j)    {
            if (haystack[j] == needle[0] && i > 0u) {
                if (fsapp == -1)    {
                    fsapp = j;
                }
            }

            if (haystack[j] == needle[i])   {
                if (index == -1) {
                    index = j;
                }

                ++i;
            }

            else {
                j = fsapp == -1 ? j : fsapp - 1;
                fsapp = -1;
                index = -1;
                i = 0u;
            }
        }
    
        return index != -1 && i == needle.length() ? index : -1;
    }
};

int main(int argc, const char** const argv) {
  return EXIT_SUCCESS;
}
