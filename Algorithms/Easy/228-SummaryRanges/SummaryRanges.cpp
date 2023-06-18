class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if (nums.empty())   {
            return {};
        }

        int& begin = nums[0], end = nums[0];
        vector<string> ranges;
        
        for (size_t i = 1; i < nums.size(); i++)    {
            if (nums[i] - 1 == end) {
                end++;
                continue;
            }

            if (begin == end)   {
                ranges.push_back(to_string(begin));
            } else {
                ranges.push_back(to_string(begin) + "->" + to_string(end));
            }
            begin = nums[i], end = nums[i];
         }

         if (begin == end)   {
                ranges.push_back(to_string(begin));
            } else {
                ranges.push_back(to_string(begin) + "->" + to_string(end));
            }

        return ranges;
    }
};

int main(int argc, const char** argv)
{
  return EXIT_SUCCESS;
}
