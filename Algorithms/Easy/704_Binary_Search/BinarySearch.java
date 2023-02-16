class Solution {
    public int search(int[] nums, int target) {
        int begin = 0, end = nums.length - 1;
        while (begin <= end)    {
            int middle = (begin + end) / 2;
            if (nums[middle] == target) {
                return middle;
            }   
            else if (nums[middle] > target) {
                end = middle - 1;
            }
            else if (nums[middle] < target) {
                begin = middle + 1;
            }
        }
        return -1;
    }   
}

public class main   {
    public static void main(String[] args)  {
        Solution solution = new Solution();
        int[] arr = {12, 23, 34, 45, 88};
        System.out.println(solution.search(arr, 88));
    }
}
