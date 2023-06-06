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

int main(int argc, const char** argv)
{
  Solution solution;
  std::cout<<solution.search({ 1, 2, 3, 4, 5, 6, 7, 8, 9 }, 8)<<std::endl;
  std::cout<<solution.search({ 1, 15, 34, 87, 88, 89, 100 }, 34)<<std::endl;
  std::cout<<solution.search({ 12, 23, 34, 45, 56, 67, 78, 89, 90 }, 12)<<std::endl;
  
  return EXIT_SUCCESS;  
}
