#include <iostream>
#include <vector>

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if (matrix.empty()) {
        return false;
    }

    	const int matrix_cols = static_cast<int>(matrix.size());
	const int matrix_rows = static_cast<int>(matrix.front().size());

	int begin = 0;
	int end = matrix_cols * matrix_rows - 1;

	while (begin <= end)	{
    	const int mid = (begin + end) / 2;
		const int current = matrix[mid / matrix_rows][mid % matrix_rows];

		if (current > target)	{
			end = mid - 1;
    		}
		else if (current < target)	{
            		begin = mid + 1;
		}
		else {
			return true;
		}
	}
	return false;
    }
};

int main(int argc, char** argv)	{
	Solution solution;

	std::vector<std::vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
	
	std::cout<<solution.searchMatrix(matrix, 20);
	std::cout<<"\n"<<solution.searchMatrix(matrix, 88);
	return EXIT_SUCCESS;
}
