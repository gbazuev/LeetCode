class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int result = 0, row = grid.size(), col = grid.size();
        map<vector<int>, int> map;

        for (size_t i = 0; i < row; i++)    {
            map[grid.at(i)]++;
        }
        
        for (size_t i = 0; i < col; i++)    {
            vector<int> current;
            for (size_t j = 0; j < row; j++)    {
                current.push_back(grid[j][i]);
            }
            result += map[current];
        }

        return result;
    }
};

int main(int argc, const char** argv)
{
  return EXIT_SUCCESS;
}
