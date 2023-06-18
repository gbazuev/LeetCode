#include <iostream>

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int begin = 0, end = n;
        while (begin + 1 < end) {
            const int mid = begin + (end - begin) / 2;
            if (!isBadVersion(mid)) {
                begin = mid;
            }
            else {
                end = mid;
            }
        }

        return end;
    }
};

int main(int argc, const char** argv)
{
  return EXIT_SUCCESS;
}
