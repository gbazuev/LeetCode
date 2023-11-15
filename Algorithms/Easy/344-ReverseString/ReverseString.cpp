#include <iostream>

class Solution {
public:
    void reverseString(vector<char>& s) {
        std::size_t l = 0u, r = s.size() - 1;
        while (l < r)  {
            char temp = s[r];
            s[r--] = s[l];
            s[l++] = temp;
        }
    }
};

int main(int argc, const char** const argv)	{
	return EXIT_SUCCESS;
}
