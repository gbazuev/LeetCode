class Solution {
public:
    bool isPowerOfTwo(int n) {
       return (n > 0) && !(n & (n - 1));
    }
};

int main(int argc, const char** argv)
{
  Solution solution;
  std::cout<<solution.isPowerOfTwo(8)<<std::endl;
  std::cout<<solution.isPowerOfTwo(1024)<<std::endl;
  std::cout<<solution.isPowerOfTwo(45)<<std::endl;
  
  return EXIT_SUCCESS;
}
