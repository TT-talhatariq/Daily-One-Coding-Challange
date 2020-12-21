import java.util.*;

class Solution {
    public int solve(int[] nums) {
        int result = 0;
        int max = Integer.MIN_VALUE;
        for (int i = nums.length - 1; i >= 0; i--) {
            if (max < nums[i])
                max = nums[i];
            else
                result = Math.max(result, max - nums[i]);
        }
        return result;
    }
}