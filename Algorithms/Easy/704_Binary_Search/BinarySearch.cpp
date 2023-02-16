class Solution {
public:
    int search(vector<int>& nums, int target) {
        int begin = 0;
        int end = nums.size() - 1;

        if (nums.empty())  {
            return -1;
        }

        while (begin <= end)    {
            const int middle = (begin + end) / 2;
            if (nums.at(middle) == target){
                return middle;
            }   
            else if (nums.at(middle) > target) {
                end = middle - 1;
            }   
            else if (nums.at(middle) < target) {
                begin = middle + 1;
            }
        }
        return -1;
    }
};
